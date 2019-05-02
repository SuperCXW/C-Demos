// 编程计算第200个三角形数，while循环改写prog52 
#include <stdio.h>

int main (void){
	int n, triangularNumber;
	
	triangularNumber = 0;
	
	n = 1;	
	while(n <= 200){
		triangularNumber += n;
		n += 1;
	}
		
	printf("The 200th triangular number is %i\n", triangularNumber);
	
	return 0;
}
