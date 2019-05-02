// 结束循环的新标准，比较x和guess的平方之间的比值与1的差，越接近1越准确 
#include <stdio.h>

float absoluteValue(float x){
	if(x < 0)
		x = -x;
	return (x);
} 

// 计算某数平方根的函数
float squareRoot(float x){
	const float epsilon = .00001;
	float guess = 1.0;
	
	while(absoluteValue(guess * guess / x - 1) >= epsilon)
		guess = (x / guess + guess) / 2.0;
	
	return guess;
} 

int main(void){
	printf("squareRoot(8863) = %f\n", squareRoot(8863));
	printf("squareRoot(0.00000005) = %f\n", squareRoot(0.00000005));
	printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
	
	return 0;
}
