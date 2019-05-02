// ����˫�������Ժ��������ƽ�����ľ��ȱ仯�� 
#include <stdio.h>

double absoluteValue(double x){
	if(x < 0)
		x = -x;
	return (x);
} 

// ����ĳ��ƽ�����ĺ���
double squareRoot(double x){
	const double epsilon = .00001;
	double guess = 1.0;
	
	while(absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
	
	return guess;
} 

int main(void){
	printf("squareRoot(2.00) = %f\n", squareRoot(2.00));
	printf("squareRoot(144) = %f\n", squareRoot(144));
	printf("squareRoot(17.5) = %f\n", squareRoot(17.5));
	
	return 0;
}
