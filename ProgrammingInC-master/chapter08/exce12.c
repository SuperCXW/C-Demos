// 编写将两个矩阵转置的函数
#include <stdio.h>

int transposeMatrix(int nRows, int nCols, int matrix_ij[nRows][nCols], 
				int matrix_ji[nCols][nRows]){
	int i, j;
	
	for(i = 0; i < nRows; ++i)
		for(j = 0; j < nCols; ++j){
			matrix_ji[j][i] = matrix_ij[i][j];
		}
	
	return 0;
}

int displyMatrix(int nRows, int nCols, int matrix[nRows][nCols]){
	int i, j;
	
	for(i = 0; i < nRows; ++i){
		for(j = 0; j < nCols; ++j){
			printf("%2i", matrix[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	int matrix_ij[4][5] = {
		{1, 5, 5, 1, 0},
		{9, 6, 9, 8, 2},
		{8, 1, 8, 2, 5},
		{9, 4, 6, 2, 0}
	};
	int matrix_ji[5][4];
	
	printf("转置前的矩阵:\n");
	displyMatrix(4, 5, matrix_ij);
	
	transposeMatrix(4, 5, matrix_ij, matrix_ji);
	
	printf("转置后的矩阵:\n");
	displyMatrix(5, 4, matrix_ji);
	
	return 0;
} 
