// 计算某数平方根的函数 Newton-Raphson方法，观察epsilon对平方根结果的精度影响 
#include <stdio.h>

float absoluteValue(float x){
	if(x < 0)
		x = -x;
	return (x);
} 

// 计算某数平方根的函数
float squareRoot(float x, float epsilon){
	float guess = 1.0;
	
	while(absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
	
	return guess;
} 

int main(void){
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0, 0.00001));
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0, 0.0001));
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0, 0.001));
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0, 0.01));
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0, 0.1));
	printf("squareRoot(144.0) = %f\n", squareRoot(144.0, 0.1));
	printf("squareRoot(17.5) = %f\n", squareRoot(17.5, 0.1));
	
	return 0;
}
