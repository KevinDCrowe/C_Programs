#include <math.h>

#define ORDER 8 //u=255 (2^8 -1)

double compress_Mu(double x) {

		int u = pow(2, ORDER) - 1;
		double y = log(1 + mu * x) / log(1 + mu);
		
		return y;
}
