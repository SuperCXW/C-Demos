// ����ѭ�����±�׼���Ƚ�x��guess��ƽ��֮��ı�ֵ��1�ĲԽ�ӽ�1Խ׼ȷ 
#include <stdio.h>

float absoluteValue(float x){
	if(x < 0)
		x = -x;
	return (x);
} 

// ����ĳ��ƽ�����ĺ���
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
