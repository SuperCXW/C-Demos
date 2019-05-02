/* 这个程序将两个整形数的值相加，并且显示其结果*/
#include <stdio.h>

int main(void)
{
	// 声明变量 
	int value1, value2, sum;
	
	// 赋值，并计算它们的和 
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	// 显示结果 
	printf("The sum of %i and %i is %i\n", value1, value2, sum);
	
	return 0;
}
