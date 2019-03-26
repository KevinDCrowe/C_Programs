#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define q 9 //Data scaling factor
#define D 1024 //Size of target data


d1filter(int a[3],int b[3],int x[D]) {
	//Allocates memory for the Accumulator
	int *y = (int *)malloc(sizeof(int)*(D)); //output
	
	//Scales the input data
	for (int i = 0; i < 3; i++) {
		b[i] = pow(2, q)*b[i];
	}
	//Performs the filtering
	for (int i = 0; i < D; i++) {
		//Fills buffer for each time delay i
		for (int j = 0; j < 3 && j < (i + 1); j++) {
			c[j] = x[i - j];
		}
		//"Delays" Accumulator entries
		for (int j = 1; j < 3; j++) {
			d[j] = d[j -1];
		}
		//Zeros current Accumulator value
		d[0] = 0;
		//Performs one round of filtering
		d[0] = x[0]*b[0];
		for (int j = 1; j < 3; j++) {
			d[0] = d[0] + x[j]*b[j] + a[j]*d[j];
		}
		y[i] = d[0] / pow(2, q);
		
		
	}
}
