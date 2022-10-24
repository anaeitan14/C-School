#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLowerCase(char* str);

void main() {
	char one[200]="Hello2";
	char two[200]="World#$";
	char three[200]="CExam2014";
	char four[200]="GOODluck";
	int totalLength = strlen(one)+strlen(two)+strlen(three)+strlen(four)+1;
	toLowerCase(one);
	toLowerCase(two);
	toLowerCase(three);
	toLowerCase(four);
	
	
	char *pointer = (char*)malloc(totalLength*sizeof(char));
	strcpy(pointer, one);
	strcat(pointer, two);
	strcat(pointer, three);
	strcat(pointer, four);
	
	puts(pointer);
	 
}


void toLowerCase(char* str) {
	int i;
	for(i=0;str[i];i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i]+=32;
		} 
		
		if(str[i] < 'a' || str[i] > 'z'){
			str[i]='_';
		} 
	}
}

