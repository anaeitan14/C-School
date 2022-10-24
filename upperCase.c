#include <stdio.h>

void what(char t[]);

int main(){
	char txt[] ="Ab 123 cD";
	printf("The original text:");
	puts(txt);
	what(txt);
	printf("The new text:");
	puts(txt);
}

void what(char t[]) {
	int i;
	for(i=0;t[i];i++){
		if(t[i]>='a' && t[i]<='z'){
			t[i]-='a'-'A';
		}
	}
}
