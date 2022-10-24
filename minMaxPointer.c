#include <stdio.h>


void minMax(int array[], int *min, int *max);

void main() {
	int array[] = {5,43,2,-3,54,2};
	int min = array[0], max=array[0];
	minMax(array, &min, &max);
	printf("The biggest number in the array is %d\n", max);
	printf("The smallest number in the array is %d\n", min);
		
}

void minMax(int array[], int *min, int *max) {
	int i;
	for(i=0;i<6;i++) {
		if(array[i] > *max){
			*max = array[i];
		}
		if(array[i] < *min) {
			*min = array[i];
		}
	}
}



