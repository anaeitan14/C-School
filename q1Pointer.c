#include <stdio.h>

void func(int num, int *max_divider, int *min_divider);

void main() {
	int num, max_divider, min_divider;
	printf("Enter your number\n");
	scanf("%d", &num);
	func(num, &max_divider, &min_divider);
	printf("The biggest divider is %d, the smallest divider is %d\n", max_divider, min_divider);
}


void func(int num, int *max_divider, int *min_divider) {
	int i, currentDiv, smallestDivider = 0;
	for(i=2;i<=num/2;i++) {
		if(num%i==0) {
			currentDiv = i;
			if(!smallestDivider) {
				*min_divider = i;
				smallestDivider = 1;
			}
			if(currentDiv > *max_divider) {
			*max_divider = i;
			}
		}
	}
}
