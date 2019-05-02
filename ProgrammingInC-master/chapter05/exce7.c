// 宽度限定符前面的小数点(.)的特殊作用，连接浮点数 
#include <stdio.h>

int main(void){
	int dollars, cents, count;
	
	for(count = 1; count <= 10; ++count){
		printf("Enter dollars: ");
		scanf("%i", &dollars);
		printf("Enter cents: ");
		scanf("%i", &cents);
		printf("$%i.%.2i\n\n", dollars, cents);
	}
	
	return 0;
} 
