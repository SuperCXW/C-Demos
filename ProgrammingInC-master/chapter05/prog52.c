// 编程计算第200个三角形数 
#include <stdio.h>

int main (void){
	int n, triangularNumber;
	
	triangularNumber = 0;
	
	for( n = 1; n <= 200; n += 1)
		triangularNumber += n;
		
	printf("The 200th triangular number is %i\n", triangularNumber);
	
	return 0;
}
