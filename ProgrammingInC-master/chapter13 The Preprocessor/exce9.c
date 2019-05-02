// 定义宏ABSOLUTE_VALUE，用于计算表达式的绝对值
#include <stdio.h>
#include "exce.h"

int main(void){
	int a = -1, b = 6;
	
	printf("%i\n", ABSOLUTE_VALUE(a));
	printf("%i\n", ABSOLUTE_VALUE(a + b));
	
	return 0;
}

