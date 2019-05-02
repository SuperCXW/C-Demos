// 计算第n个三角形数，直接返回计算结果。 

#include <stdio.h>

int calculateTriangularNumber(int n){
	int i, triangularNumber = 0;
	
	for(i = 1; i <= n; ++i)
		triangularNumber += i;
	
	return triangularNumber;
} 

int main(void){
	printf("%i \n", calculateTriangularNumber(10));
	printf("%i \n", calculateTriangularNumber(20));
	printf("%i \n", calculateTriangularNumber(50));
	
	return 0;
} 
