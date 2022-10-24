#include <stdio.h>
#include <string.h>

void main() {

char s1[40]="abc";
char s2[]="xyz";
int x;

strcpy(s2, "tt");
puts(s2);
strcat(s1, s2);
puts(s1);
x = strlen(s1);
printf("%d\n", x);
x = strcmp(s1, "abc");
printf("%d\n", x);

}
