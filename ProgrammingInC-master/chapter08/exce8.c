// ��д���������η��̣�ϵ���ֱ�Ϊa��b��c 

#include <stdio.h>

float absoluteValue(float x){
	if(x < 0)
		x = -x;
	return (x);
}

float squareRoot(float x){
	const float epsilon = .00001;
	float guess = 1.0;
	
	while(absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
	
	return guess;
} 

int main(void){
	int a, b, c;
	float x_1, x_2, sqrt;
	float squareRoot(float x);
	
	printf("������������η��̵�a��b��cϵ��:\n");
	scanf("%i %i %i", &a, &b, &c);
	
	sqrt = (float)(b * b - 4 * a * c);
	
	if(sqrt < 0){
		printf("�÷��̵ĸ�Ϊ������");
		return 0;
	}
	else{
		x_1 = (-b + squareRoot(sqrt)) / (2 * a);
		x_2 = (-b - squareRoot(sqrt)) / (2 * a);
		printf("�÷��̵ĸ�Ϊ:%f��%f\n", x_1, x_2);
	}	
	
	return 0;
}
