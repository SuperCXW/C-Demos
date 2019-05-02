// 演示#define语句
#include <stdio.h>

#define YES 1
#define NO 0

// 判断整数是否是偶数的函数
int isEven(int number){
	int answer;
	
	if(number % 2)
		answer = NO;
	else
		answer = YES;
	
	return answer;
}

int main(void){
	int isEven(int number);
	
	if(isEven(17) == YES)
		printf("yes\n");
	else
		printf("no\n");
	
	if(isEven(20) == YES)
		printf("yes\n");
	else
		printf("no\n");
		
	return 0;
}
