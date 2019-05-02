// �۲�guess�������ٶȡ��������еĴ�������Ҫ����ƽ���������֣��Լ�����Ĳ²�ֵ֮��Ĺ�ϵ
// ���������Խ�󣬵����Ĵ���Խ�࣬������Խ�죬������²�ֵ��ϵ���� 
#include <stdio.h>

float absoluteValue(float x){
	if(x < 0)
		x = -x;
	return (x);
} 

// ����ĳ��ƽ�����ĺ���
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
