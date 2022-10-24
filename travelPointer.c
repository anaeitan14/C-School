#include <stdio.h>

void main() {
	int vec[10] = {1,2};
	int *p = vec;
	printf("%p\n", p);
	printf("%p\n", &vec);
	printf("%p\n",&vec[0]);
	p++;
	printf("%d\n",vec[0]);
	printf("%d\n",*p-1);
	printf("%d\n",*p);
	
	printf("%p\n", &vec[0]);
	printf("%p\n", &vec);
}
