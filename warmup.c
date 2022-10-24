#include <stdio.h>
#define LENGTH 20

void main() {
	char string1[LENGTH];
	char string2[LENGTH];
	int i, j;
	
	printf("Enter the first string\n");
	gets(string1);
	printf("Enter the second string\n");
	gets(string2);
	
	for(i=0;i<LENGTH;i++) {
		for(j=0;string2[j];j++) {
			if(string1[i] == string2[j] && string1[i] != 32) 
				printf("The matching character is %c INDEX %d AT STRING1 INDEX %d at STRING2\n", string1[i], i,j);
		}
	}
}
