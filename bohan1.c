#include <stdio.h>
#define n 5

void Func(int m[n][n]);

void main() {
	int i,j;
	int mat[n][n] = {{0,0,0,0,0},
					{0,0,0,0,0},
					{0,0,0,0,0},
					{0,0,0,0,0},
					{0,0,0,0,0}};
	Func(mat);
	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
}



void Func(int m[n][n]) {
	int r,c,i,flag=1;
	r=c=0;
	m[r][c]=i=1;
	while(flag) {
		flag=0;
		while(c+1<n && m[r][c+1] == 0) {
			c++;
			i++;
			m[r][c]=i;
			flag=1;
		}
		while(r+1<n && m[r+1][c]== 0) {
			r++;
			i++;
			m[r][c]=i;
			flag=1;
		}
		while(c-1>=0 && m[r][c-1]== 0) {
			c--;
			i++;
			m[r][c]=i;
			flag=1;
		}
		while(r-1>=0 && m[r-1][c]== 0) {
			r--;
			i++;
			m[r][c]=i;
			flag=1;
		}
	}
}
