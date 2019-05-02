// 编程计算1到10这十个数的平方。
#include <stdio.h>

int main(void){
	// 初始化 
	int i;
	
	printf("表格   1到10的平方\n");
	
	for(i = 1; i <= 10; i++){
		printf("%2i	%i\n", i, i * i);
	}
	
	return 0;
} 
