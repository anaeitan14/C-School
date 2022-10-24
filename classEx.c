#include <stdio.h>

int smallBig(int x, int y);

int main() {
	
	int a = 0, b = 0, big = 0;
	printf("Enter numbers");
	
	scanf("%d %d", &a, &b);
	
	big=smallBig(a, b);
	
	printf("%d", big);

return 0;
} 


int smallBig(int x, int y) {
	
	if(x>y) {
		return x;
	} else {
		return y;
	}
}


