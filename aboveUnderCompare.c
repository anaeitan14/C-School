#include <stdio.h>
#define ROWS 3
#define COLS 3


int aboveMain(int matrice[][COLS]);
int underMain(int matrice[][COLS]);
	
void main() {
	
	int	matrice[3][3] = {{1,2,3},
						 {4,5,6},
						 {7,8,9}};

	int sum1 = aboveMain(matrice);
	int sum2 = underMain(matrice);
	sum1 > sum2 ? printf("The above diagonal sum is bigger %d\n", sum1) : printf("The under diagonal sum is bigger %d\n", sum2);
}


int aboveMain(int matrice[][COLS]) {
	int sum=0, i, j;
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			if(i < j) 
				sum+= matrice[i][j];	
			
		}
	}
	return sum;
}



int underMain(int matrice[][COLS]) {
	int sum=0, i, j;
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			if(i > j) 
				sum+= matrice[i][j];	
			
		}
	}
	return sum;
}
