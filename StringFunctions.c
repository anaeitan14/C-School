#include <stdio.h>
#include <string.h>


void main() {
	char string1[30];
	char string2[30];
	
	printf("Enter the first string\n");
	gets(string1);
	
	printf("Enter the second string\n");
	gets(string2);
	int length1 = strlen(string1);
	int length2 = strlen(string2);
	
	if(length1 > length2) {
		strcpy(string2, string1);
		puts(string2);
	} else {
		strcat(string2, " ");
		strcat(string2, string1);
		puts(string2);
	}
}
