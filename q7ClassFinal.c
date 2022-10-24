#include <stdio.h>

void main() {
	int vec1[10], vec2[10], vec3[10],i;
	
	for(i=0;i<10;i++) {
		printf("Enter the %d value for the first array", i+1);
		scanf("%d",&vec1[i]);
	}
	
	for(i=0;i<10;i++) {
		printf("Enter the %d value for the second array", i+1);
		scanf("%d",&vec2[i]);
	}
	
	for(i=0;i<10;i++) {
		vec3[i] = vec1[i] + vec2[i];
	}
	
	for(i=0;i<10;i++) {
		printf("%d\n",vec3[i]);
	}
	
}
