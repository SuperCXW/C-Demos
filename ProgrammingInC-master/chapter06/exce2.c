// �û����������������жϵ�һ�����ܷ������ڶ�����
#include <stdio.h>

int main(void){
	int a, b;
	
	printf("����������������\n");
	scanf("%i %i", &a, &b);
	
	if(b % a == 0)
		printf("%i������%i��", a, b);
	else
		printf("%i��������%i��", a, b);
		
	return 0;
} 
