// 打印三角形数表 
#include <stdio.h>

int main (void){
	int n, triangularNumber;
	
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n    Sum from 1 to n\n");
	printf("---   ---------------\n");
	
	triangularNumber = 0;
	
	for( n = 1; n <= 10; n++){
		triangularNumber += n;
		// %2i, 限定宽度，右对齐 
		printf("%2i        %i\n", n, triangularNumber);
	}	
	
	return 0;
}
