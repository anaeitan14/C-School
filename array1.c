#include <stdio.h>      
#define ROWS 3
#define COLS 4

void inputMat(int mat[][COLS]);
void sumMat(int mat[][COLS]);

int main() {
	int myMat[ROWS][COLS];
    inputMat(myMat);
    sumMat(myMat);
}


void inputMat(int mat[][COLS]){
	int i,j;
	for(i=0;i<ROWS;i++) {
		for(j=0;j<COLS;j++) {
			printf("Enter number for row %d and column %d\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}

void sumMat(int mat[][COLS]){
	int i,j, sum;
	for(i=0;i<ROWS;i++) {
		for(j=0;j<COLS;j++) {
			sum+=mat[i][j];
		}
	}
	printf("%d", sum);
}
