/*计算绝对值的函数*/

#include <stdio.h>

float absoluteValue(float x){
	if(x < 0)
		x = -x;
		
	return x;
}

int main(void){
	float f1 = -15.5, f2 = 20.0, f3 = -5.0;
	int i1 = -716;
	float result;
	
	// 一个函数永远无法修改它的参数的值，它只能修改这些参数的拷贝 
	result = absoluteValue(f1);
	printf("result = %.2f\n", result);
	printf("f1 = %.2f\n", f1);
	
	result = absoluteValue(f2) + absoluteValue(f3);
	printf("result = %.2f\n", result);
	
	result = absoluteValue((float) i1);
	printf("result = %.2f\n", result);
	
	// 自动类型转换 
	result = absoluteValue(i1);
	printf("result = %.2f\n", result);
	
	printf("%.2f\n", absoluteValue(-6.0) / 4);
	return 0;
}
