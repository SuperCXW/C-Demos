// 用户输入两个整数，判断第一个数能否整除第二个数
#include <stdio.h>

int main(void){
	int a, b;
	
	printf("请输入两个整数：\n");
	scanf("%i %i", &a, &b);
	
	if(b % a == 0)
		printf("%i能整除%i。", a, b);
	else
		printf("%i不能整除%i。", a, b);
		
	return 0;
} 
