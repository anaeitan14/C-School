#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, *p, i ;

	printf("Enter num : ") ;
	scanf("%d", &num) ;
	if (num<0)
		printf("ERROR!") ;
	else {
		p = (int *)malloc(num*sizeof(int)) ;
		if (p==NULL)
			printf("No memory left") ;
		else
		{
			for (i=0 ; i<num ; i++)
				scanf("%d",&p[i]);
			p = (int *)realloc(p, (num-2)*sizeof(int));	
			free(p);
		}
	}
}

