#include <stdio.h>
#include <string.h>


void main() {
	char string1[20], string2[20];
	int z;
	
	printf("Enter your first string\n");
	gets(string1);
	printf("Enter your second string\n");
	gets(string2);
	
	z = strcmp(string1, string2);
	printf("%d\n",z);
	
	strrev(string1);
	puts(string1);

	strrev(string2);
	puts(string2);
	
	int index = strchr(string1, 'a');
	printf("%d", index);
}

