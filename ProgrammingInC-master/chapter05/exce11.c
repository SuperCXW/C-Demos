// ����ĳ���������е�λ�ϵ����ֵĺ͡�
#include <stdio.h>

int main(void){
	int number, sum;
	
	printf("������һ�������������");
	scanf("%i", &number);
	
	while(number > 0){
		sum += number % 10;
		number /= 10;
	};
	
	printf("���������е�λ�ϵ����ֵĺ�Ϊ��%i\n", sum);
	
	return 0;
} 
