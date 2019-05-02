// 计算某个整数所有的位上的数字的和。
#include <stdio.h>

int main(void){
	int number, sum;
	
	printf("请输入一个任意的整数：");
	scanf("%i", &number);
	
	while(number > 0){
		sum += number % 10;
		number /= 10;
	};
	
	printf("该整数所有的位上的数字的和为：%i\n", sum);
	
	return 0;
} 
