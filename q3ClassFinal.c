#include <stdio.h>
#define COL 4
#define ROW 4

void inputMatrice(int mat[][COL]);
double averageRows(int mat[][COL]);
double averageColumns(int mat[][COL]);
void swapElements(int mat[][COL]);
void printMatrice(int mat[][COL]);



void main() {
	int mat[ROW][COL];
	inputMatrice(mat);
	printMatrice(mat);
	swapElements(mat);
	printMatrice(mat);
	
}

void inputMatrice(int mat[][COL]) {
	int i,j;
	for(i=0;i<ROW;i++) {
		for(j=0;j<COL;j++) {
			printf("Enter a number for row %d and column %d\n",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
}

double averageRows(int mat[][COL]) {
	int i,j,cnt=0;
	double avg = 0;
	for(i=0;i<ROW;i++) {
		for(j=0;j<COL;j++) {
			if(i%2==0) {
				avg+=mat[i][j];
				cnt++;
			}
		}
	}
	
	return avg/cnt;
}

double averageColumns(int mat[][COL]) {
	int i,j,cnt=0;
	double avg = 0;
	for(i=0;i<ROW;i++) {
		for(j=0;j<COL;j++) {
			if(j%2==1) {
				avg+=mat[i][j];
				cnt++;
			}
		}
	}
	
	return avg/cnt;
}

void swapElements(int mat[][COL]) {
	int i,j,temp;
	for(i=0;i<ROW;i++) {
		for(j=0;j<COL;j++) {
			if(i%2==1) {
				temp = mat[i][j];
				mat[i][j] = mat[i-1][j];
				mat[i-1][j] = temp;
				
			}
		}
	}
}

void printMatrice(int mat[][COL]) {
	int i,j;
	for(i=0;i<ROW;i++) {
		for(j=0;j<COL;j++) {
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}	
}
