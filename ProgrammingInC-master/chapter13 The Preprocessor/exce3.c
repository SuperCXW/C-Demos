// 定义宏MIN返回两值中的较小值
#include <stdio.h>
#include "exce.h"

int main(void){
	int a = 3, b = 9, c;
	
	c = MIN(a, b);
	
	printf("c:%i\n", c);
	
	return 0;
}
