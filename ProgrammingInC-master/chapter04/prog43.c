// ���������������Ľ�һ������
#include <stdio.h>

int main (void){
	int a = 25;
	int b = 2;
	float c = 25.0;
	float d = 2.0;
	
	printf ("6 + a / 5 * b = %i\n", 6 + a / 5 * b); // 16
	printf ("a / b * b = %i\n", a / b * b); // 24, ע��С�����ֱ����� 
	printf ("c / d * d = %f\n", c / d * d);
	printf ("-a = %i\n", -a);
	
	return 0;
} 
