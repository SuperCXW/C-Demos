// 观察guess的收敛速度、迭代运行的次数、需要计算平方根的数字，以及最初的猜测值之间的关系
// 计算的数字越大，迭代的次数越多，收敛得越快，与最初猜测值关系不大。 
#include <stdio.h>

float absoluteValue(float x){
	if(x < 0)
		x = -x;
	return (x);
} 

// 计算某数平方根的函数
float squareRoot(float x, float epsilon){
	float guess = 1.0;
	
	while(absoluteValue(guess * guess - x) >= epsilon){
		guess = (x / guess + guess) / 2.0;
		printf("%.3f\n", guess);
	}
		
	return guess;
} 

int main(void){
	printf("squareRoot(2.0) = %f\n", squareRoot(2.0, 0.00001));
	printf("squareRoot(144.0) = %f\n", squareRoot(144.0, 0.00001));
	printf("squareRoot(17.5) = %f\n", squareRoot(17.5, 0.00001));
	
	return 0;
}
