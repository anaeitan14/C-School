#include <stdio.h>


float mul (float *x, float *y) {
	return *x*(*y);
}

main() {
	float a, b;
	scanf("%f  %f",&a, &b); 
	printf("%f", mul(&a,&b));
}

