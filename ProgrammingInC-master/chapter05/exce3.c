// ����5��50֮����Ϊ5���������ֵ���������
#include <stdio.h>

int main(void){
	int number, triangularNumber;
	
	printf("���	��������\n");
	for(number = 5; number <= 50; number += 5){
		printf("%2i	 %i\n", number, number * (number + 1) / 2);
	}
	
	return 0;
} 
