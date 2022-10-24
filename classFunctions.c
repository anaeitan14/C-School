#include <stdio.h>

void checkPair(int a);
void numSum(int a);
void decimalBinary(int a);

int main() {
	
	int num;
	
	printf("Enter a number\n");
	
	do {
		scanf("%d",&num);	
		if(num > 999 || num < 100) {
			printf("Enter a 3 digit number\n");
		}	
	}while(num > 999 || num < 100);
	
	checkPair(num);
	numSum(num);
	decimalBinary(num);
	
	
	return 0; 
}
	
	
	void checkPair(int a) {
		if(a % 2 == 0) {
			printf("%d\n", a%10);
		} else {
			printf("%d\n", a/10%10);
		}
	}
	
	void numSum(int a) {
		int tmp = a, reverseNum = 0, numberSum = 0;
		float res = 0.0;
		
		while(tmp != 0) {
			reverseNum = reverseNum*10 + tmp%10;
			tmp/=10;
		}
		
		numberSum = reverseNum + a;
		
		if(numberSum > 999) {
			float avg;
			while(numberSum != 0) {
				avg += numberSum % 10;
				numberSum /= 10;
			}
			res = avg / 4;
			printf("%f\n", res);
		}
	}
	
	void decimalBinary(int a) {
		
		int binaryNum = 0, i = 1;
		while(a != 0) {	
			binaryNum += (a%2)*i;
			i*=10;
			a/=2;
		}
		printf("%d\n", binaryNum);
	}
