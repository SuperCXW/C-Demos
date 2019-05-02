// 输出负数的逆序数，输入-8645，输出5468.
#include <stdio.h>

int main(void){
	int number;
	
	printf("请输入一个任意整数：\n");
	scanf("%i", &number);
	
	printf("该数的逆序数为：\n");
	
	if(number > 0){
		while(number > 0){
			printf("%i", number % 10);
			number /= 10;
		}
	}
	else if(number < 0){
		number = -number;
		while(number > 0){
			printf("%i", number % 10);
			number /= 10;
		}
		printf("-");
	}
	else
		printf("0");
	
	return 0;	
} 
