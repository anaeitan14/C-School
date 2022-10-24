#include <stdio.h>
#include <stdlib.h>


void main() {
	int *ptr,size,i;
	printf("Enter a size for the dynamic array");
	scanf("%d",&size);
	ptr = (int*)calloc(size,sizeof(int));
	
	for(i=0;i<size;i++) {
		printf("Enter a number for place %d\n",i+1);
		scanf("%d", (ptr+i));
	}
	printf("PRINT\n");
	for(i=0;i<size;i++) {
		printf("%d\n", *(ptr+i));
	}
	
	free(ptr);
}
