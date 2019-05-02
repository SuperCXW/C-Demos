// 编写程序确定计算机执行的是算术右移还是逻辑右移
#include <stdio.h>

int main(void){
	signed int w1 = -1 % 32;
	signed int flag;
	
	printf("%x\n", w1);
	w1 >>= 1;
	printf("%x\n", w1);
	flag = w1 >> 31;
	
	if(flag == -1)
		printf("SAR\n"); // 算术右移
	else
		printf("SHR\n"); // 逻辑右移
	
	return 0;
}
