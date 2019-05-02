// 整型数与浮点数之间的转换
#include <stdio.h>

int main (void){
	float f1 = 123.125, f2;
	int i1, i2 = -150;
	char c = 'a';
	
	i1 = f1; // 浮点数转换为整型数, 123
	printf ("%f assigned to an int produces %i\n", f1, i1);
	
	f1 = i2; // 整型数转换为浮点数, -150.000000
	printf ("%i assigned to an float produces %f\n", i2, f1);
	
	f1 = i2 / 100; // 整型数被整型数相除, -1.000000
	printf ("%i divided by 100 produces %f\n", i2, f1);
	
	f2 = i2 / 100.0; // 整型数除以浮点数, -1.500000
	printf ("%i divided by 100.0 produces %f\n", i2, f2);
	
	f2 = (float) i2 / 100; // 类型转换操作符, -1.500000
	printf ("(float) %i divided by 100 produces %f\n", i2, f2);
	
	/*
	结合运算和赋值：运算赋值操作符
	count += 10;
	这里加等操作符(+=)的作用是将其左面的操作数和右面的操作数加起来，然后将其结果再存放在左面的操作数中，等价于：
	count = count + 10; 
	同理：
	count -= 5；
	a /= b + c;
	根据运算符的优先级顺序，先计算b + c的值，a除以(b + c)的结果再存放回a中，等价于：
	a = a / (b + c); 
	*/
	return 0; 
} 
