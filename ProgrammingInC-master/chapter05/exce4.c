// ����1��10�Ľ׳�
#include <stdio.h>

int main(void){
	int number, i;
	int result = 1;
	
	printf("���	1��10�Ľ׳�\n");
	for(number = 1; number <= 10; number++){
		for(i = 1; i <= number; i++){
			result *= i;	
		}
		
		printf("%2i	 %i\n", number, result);
		
		// ע�������׳�֮����result��1 
		result = 1;
	}
	
	return 0;
} 
