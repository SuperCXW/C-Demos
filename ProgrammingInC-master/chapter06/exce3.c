// �û�����������������ʾ��һ�������Եڶ������Ľ��������3λС�� 
#include <stdio.h>

int main(void){
	int a, b;
	
	printf("����������������\n");
	scanf("%i %i", &a, &b);
	
	if(b == 0)
		printf("��������Ϊ0.");
	else
		printf("%i����%i�Ľ��Ϊ��%.3f", a, b, (float)a / b);
		
	return 0;
} 
