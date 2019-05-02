// 计算5到50之间间隔为5的所有数字的三角形数
#include <stdio.h>

int main(void){
	int number, triangularNumber;
	
	printf("表格	三角形数\n");
	for(number = 5; number <= 50; number += 5){
		printf("%2i	 %i\n", number, number * (number + 1) / 2);
	}
	
	return 0;
} 
