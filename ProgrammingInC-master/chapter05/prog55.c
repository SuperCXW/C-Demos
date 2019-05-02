// 使用嵌套for循环 ，调用新版本的函数 
#include <stdio.h>

int calculateTriangularNumber(int n){
	int i, triangularNumber = 0;
	
	for(i = 1; i <= n; ++i)
		triangularNumber += i;
	
	return triangularNumber;
}

int main (void){
	int n, number, triangularNumber, counter;
	
	for(counter = 1; counter <= 5; ++counter){
		printf("What triangluar number do you want? ");
		scanf ("%i", &number);
	
		triangularNumber = calculateTriangularNumber(number);
	
		printf("Triangular number %i is %i\n", number, triangularNumber);
	}
		
	return 0;	
	
}
