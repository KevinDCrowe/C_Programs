#include <stdio.h>
#include <stdlib.h>
#include <math.h>

D2Filter(int a[3],int b[3],int x[]){
D=sizeof(x)/sizeof(int);
int v[3]={0};
int *y=(int *)malloc(sizeof(int)*D);
for(int i=0;i<D;i++){
	y[i]=0;
}
	
v[i]=x[i]+a[1]*v[i+1]+a[2]*v[i+2];
y[i]=v[j]*b[j];


for (int i = 0; i < D; i++) {
	//"Delays" Accumulator entries
	for (int j = 1; j < 3; j++) {
		v[j] = v[j -1];
      	}
	//Zeros current Accumulator value
	v[0]=0;
	//Performs one round of filtering
	v[i]=x[i]+a[1]*v[i+1]+a[2]*v[i+2];
	for( int j=0;j<3;j++){
		y[i]=v[j]*b[j]+y[i];
	}      
}
}
