#include <stdio.h>

int main() {
	int mat[3][3] = {{21,65,3},
					 {43,5,21},
					 {7,43,9}};
	int i, j, sum, otherSum, aboveMain, aboveSecondary;
	
	for(i=0;i<sizeof(mat[0])/sizeof(mat[0][0]);i++) {
		for(j=0;j<sizeof(mat[0])/sizeof(mat[0][0]);j++) {
			if(i == j) {
				sum+=mat[i][j];
			}
		}
	}
	printf("Main diagonal %d\n", sum);
	
	for(i=0;i<3;i++) {
		for(j=2;j>=0;j--) {
			if(i + j == (sizeof(mat[0])/sizeof(mat[0][0]))-1) {
				otherSum += mat[i][j];
			}
		}
	}
	printf("Secondary diagonal %d\n", otherSum);
	
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			if(i < j)
				aboveMain += mat[i][j];
		}
	}
	
	printf("Sum above main is %d\n", aboveMain);
	
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			if(i+j > 2) {
				aboveSecondary += mat[i][j];
			}
		}
	}
	
	printf("above secondary %d", aboveSecondary);
}

