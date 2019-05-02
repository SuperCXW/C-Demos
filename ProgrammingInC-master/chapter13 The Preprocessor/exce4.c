// 定义宏MAX3返回三个值中最大的一个
#include <stdio.h>
#include "exce.h"

int main(void){
	int a = 3, b = 6, c = 9, d;
	
	d = MAX3(a, b, c);
	
	printf("d:%i\n", d);
	
	return 0;
}
