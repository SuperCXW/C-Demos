// 判断数字是奇数还是偶数
#include <stdio.h>

int main (void){
	int number_to_test, remainder;
	
	printf("Entering your number to be tested.: ");
	scanf("%i", &number_to_test);
	
	remainder = number_to_test % 2;
	
	if(remainder == 0){
		printf("The number is even.\n");
	}
	if(remainder != 0){
		printf("The number is odd.\n");
	}
	
	return 0;
} 
