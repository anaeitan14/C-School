#include <stdio.h>
#include <stdlib.h>



int* dynamic(int arr);

void main() {
	int arr[]={43,2,33,2,76,5,4};
	int *p = dynamic(arr);
	printf("%p",p);
}


int* dynamic(int arr) {
	int i,j, cnt=0, *p;
	for(i=0;i<sizeof(arr)/sizeof(int);i++) {
		if(arr+i % 2 == 1)
			cnt++;
	}
	
	p = (int*)malloc(cnt*sizeof(int));
	
	for(i=0,j=0;i<sizeof(arr)/sizeof(int);i++) {
		if(arr+i%2==1) {
			*(p+j) = arr+i;
			j++;
		}
	}
	
	return p;
	
}
