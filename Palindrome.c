#include <stdio.h>

int palindrome(char[]);

void main() {
	char str[21];
	printf("Enter your string\n");
	gets(str);
	int result = palindrome(str);
	if(result) {
		printf("Is a palindrome\n");
	} else {
		printf("Is not a palindrome\n");
	}
}


int palindrome(char str[]) {
	int i=0,j=0;
	
	do{
		i++;
		j++;
	}while(str[i] != '\0');
	
	for(i=0,j-=1;j>i;i++,j--) {
		if(str[i] != str[j])
			return 0;
	}
	return 1;
}
