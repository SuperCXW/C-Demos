// ���������������������-8645�����5468.
#include <stdio.h>

int main(void){
	int number;
	
	printf("������һ������������\n");
	scanf("%i", &number);
	
	printf("������������Ϊ��\n");
	
	if(number > 0){
		while(number > 0){
			printf("%i", number % 10);
			number /= 10;
		}
	}
	else if(number < 0){
		number = -number;
		while(number > 0){
			printf("%i", number % 10);
			number /= 10;
		}
		printf("-");
	}
	else
		printf("0");
	
	return 0;	
} 
