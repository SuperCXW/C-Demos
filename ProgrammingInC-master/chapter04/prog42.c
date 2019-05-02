// 说明各算术操作符的用法 
#include <stdio.h>
int main (void){
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;
	
	result = a - b; // 减法
	printf ("a - b = %i\n", result);
	
	result = b * c; // 乘法
	printf ("b * c = %i\n", result);
	
	result = a / c; // 除法
	printf ("a / c = %i\n", result);
	
	result = a + b * c; // 优先级
	printf ("a + b * c = %i\n", result);
	
	printf ("a * b + c * d = %i\n", a * b + c * d);
	
	return 0; 
}
