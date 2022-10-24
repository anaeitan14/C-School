#include <stdio.h>
#include <string.h>

int delete_chars(char *str, int place, int number);


void main() {
	char myString[30] = "abcdefghi";
	int res = delete_chars(&myString, 3, 4);
	printf("The length of the new string is %d\n",res);
	puts(myString);
}

int delete_chars(char *str, int place, int number) {
	if(place+number >= strlen(str)) {
		return strlen(str);
	} else {
		str[place] = '\0';
	}
	
	strcat(str, str+place+number);
		
	return strlen(str);
}
