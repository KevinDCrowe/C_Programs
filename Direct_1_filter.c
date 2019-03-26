#include <stdlib.h>
#include <stdio.h>
#include <math.h>

d1filter(int a[3],int b[3],int x[],int q) {
	D=sizeof(x)/sizeof(int);
	//Allocates memory for the Accumulator
	int *y = (int *)malloc(sizeof(int)*(D)); //output
	int v[3]={0}; //Accumulator buffer
	
	//Scales the input data
	for (int i = 0; i < 3; i++) {
		b[i] = pow(2, q)*b[i];
	}
	//Performs the filtering
	for (int i = 0; i < D; i++) {
		
		//"Delays" Accumulator entries
		for (int j = 1; j < 3; j++) {
			v[j] = v[j -1];
		}
		//Zeros current Accumulator value
		v[0] = 0;
		//Performs one round of filtering
		v[0] = x[0]*b[0];
		for (int j = 1; j < 3; j++) {
			v[0] = v[0] + x[j]*b[j] - a[j]*v[j];
		}
		y[i] = v[0] / pow(2, q);
	}
}
