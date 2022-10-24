#include <stdio.h>
#include <string.h>

char func1(char *str1,char *str2, int ind);
char *func2(char *str1, char *str2);

void main() {
	char str1[] = "hello , put your head here";
	char str2[] ="he";
	
	printf("%s\n",func2(str1,str2));
}

char func1(char *str1, char *str2, int ind) {
	while(*str2) 
		if(str1[ind++] != *str2++)
			return 0;
	return 1;
}

char *func2(char *str1, char *str2) {
	int len2 = strlen(str2);
	int i, ind = 0;
	int limit = strlen(str1)-len2+1;
	for(i=0;i<limit;i++) {
		if(func1(str1,str2,i)) {
			ind = i+len2;
			str1[i]=0;
			strcat(str1,str1+ind);
			i--;
			limit=strlen(str1)-len2+1;
		}
	}
	return str1;
}
