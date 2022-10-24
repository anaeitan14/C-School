#include <stdio.h>



int func(char* ptr);

void main() {
	char string[50];
	printf("Enter a string\n");
	gets(string);
	printf("%d\n",func(&string));
}


int func(char* ptr) {
	int i;
	int cnt=0;
	for(i=0;*(ptr+i) != 0;i++) {
		if(*(ptr+i) >= 'A' && *(ptr+i) <= 'Z') {
			cnt++;
			*(ptr+i) += 32;
			printf("%c\n", *(ptr+i));
		}
	}
	return cnt;
}
