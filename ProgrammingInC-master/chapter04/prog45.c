// �������븡����֮���ת��
#include <stdio.h>

int main (void){
	float f1 = 123.125, f2;
	int i1, i2 = -150;
	char c = 'a';
	
	i1 = f1; // ������ת��Ϊ������, 123
	printf ("%f assigned to an int produces %i\n", f1, i1);
	
	f1 = i2; // ������ת��Ϊ������, -150.000000
	printf ("%i assigned to an float produces %f\n", i2, f1);
	
	f1 = i2 / 100; // �����������������, -1.000000
	printf ("%i divided by 100 produces %f\n", i2, f1);
	
	f2 = i2 / 100.0; // ���������Ը�����, -1.500000
	printf ("%i divided by 100.0 produces %f\n", i2, f2);
	
	f2 = (float) i2 / 100; // ����ת��������, -1.500000
	printf ("(float) %i divided by 100 produces %f\n", i2, f2);
	
	/*
	�������͸�ֵ�����㸳ֵ������
	count += 10;
	����ӵȲ�����(+=)�������ǽ�������Ĳ�����������Ĳ�������������Ȼ�������ٴ��������Ĳ������У��ȼ��ڣ�
	count = count + 10; 
	ͬ��
	count -= 5��
	a /= b + c;
	��������������ȼ�˳���ȼ���b + c��ֵ��a����(b + c)�Ľ���ٴ�Ż�a�У��ȼ��ڣ�
	a = a / (b + c); 
	*/
	return 0; 
} 
