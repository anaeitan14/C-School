#include <stdio.h>

int smallBig(int x, int y);
int sumNum(int x, int y);

int main() {
	
	int a = 0, b = 0, big = 0, sum = 0;
	printf("Enter numbers\n");

	scanf("%d %d", &a, &b);
	
	big=smallBig(a, b);
	sum=sumNum(a, b);

	printf("%d\n", big);
	printf("%d\n", sum);
	
	
return 0;
} 


int smallBig(int x, int y) {	
	if(x>y) {
		return x;
	} else {
		return y;
	}
}

int sumNum(int x, int y) {
	return x+y;
}

