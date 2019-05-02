// 用户输入想要计算的三角形数的个数 
#include <stdio.h>

int main (void){
	int i, n, number, triangularNumber, counter;
	
	printf("请输入您想要计算的三角形数的个数：");
	scanf("%i", &counter);
	
	for(i = 1; i <= counter; i++){
		printf("What triangluar number do you want? ");
		scanf ("%i", &number);
	
		triangularNumber = 0;
	
		for( n = 1; n <= number; n++){
			triangularNumber += n;
		}
	
		printf("Triangular number %i is %i\n", number, triangularNumber);
	}
		
	return 0;	
	
}
