#include <stdio.h>

int bigNum();

int main() {
	
	int ans;	
	ans = bigNum();
	printf("%d", ans);
	
	return 0;
}

int bigNum() {
	int x = 0, biggestNum = 0;
	
	do {
		scanf("%d",&x);
		if(x > biggestNum) {
			biggestNum = x;
		}
	}while(x != 0);
	
	return biggestNum;
}
