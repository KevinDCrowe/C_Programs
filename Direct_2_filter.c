#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define a1 10
#define D 1024

D2Filter(int a[3],int b[3],int x[D]){

int A1[3]={0};
int A2[3]={0};


int *y=(int *)malloc(sizeof(int)*y);

for (int i = 0; i < D; i++) {
		//Fills buffer for each time delay i
		for (int j = 0; j < 3 && j < (i + 1); j++) {
			
		//"Delays" Accumulator entries
		for (int j = 1; j < 3; j++) {
			A1[j] = A1[j -1];
      
		}
		//Zeros current Accumulator value
		d[0] = 0;
		//Performs one round of filtering
		d[0] = x[0]*b[0];
	
			d[0] = d[0] + x[j]*b[j] + a[j]*d[j];
      A1[0] = x[i]+a[1]*A1[1] +a[2]*A[2]
      y[i]=A[0]*b[0]+A[1]*b[1]+a[2]*b[2];
      
}

}
