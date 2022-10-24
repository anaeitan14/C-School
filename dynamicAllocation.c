#include <stdio.h>
#include <stdlib.h>


void main() {
	int size, i, j, evenCount=0, *ptr;
	int arr[] = {143,2,12,75,34,22};
	
	for(i=0;i<6;i++) {
		if(arr[i] % 2 == 0) {
			evenCount++;
		}
	}
	
	ptr = (int*)malloc(evenCount*sizeof(int));
	
	
	for(i=0,j=0;i<6;i++) {
		if(arr[i] % 2 == 0) {
			*(ptr+j) = arr[i];
			j++;
		}
	}
	
	for(i=0;i<evenCount;i++) {
		printf("%d\n", *(ptr+i));
	}
	
	free(ptr);
}
