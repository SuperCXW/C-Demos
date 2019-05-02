// 计算1到10的阶乘
#include <stdio.h>

int main(void){
	int number, i;
	int result = 1;
	
	printf("表格	1到10的阶乘\n");
	for(number = 1; number <= 10; number++){
		for(i = 1; i <= number; i++){
			result *= i;	
		}
		
		printf("%2i	 %i\n", number, result);
		
		// 注意计算完阶乘之后让result归1 
		result = 1;
	}
	
	return 0;
} 
