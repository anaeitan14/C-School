#include <stdio.h>
#include <math.h>


int main() {
	
	int goodNum;
	
	printf("Enter number\n");
	scanf("%d", &goodNum);
	
	if(pow(goodNum%10, 3) + pow((goodNum/10)%10, 3) + pow(goodNum/100, 3) == goodNum) {
		printf("Sticklis number\n");
	} else {
		printf("Error\n");
	}	
		
return 0;
}       
