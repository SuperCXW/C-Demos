// 定义宏IS_UPPER_CASE，该宏检查某个字符是否是大写字母，是则返回非0值，否则返回0
#include <stdio.h>
#include "exce.h"

int main(void){
	char c = 'H';
	
	printf("%i\n", IS_UPPER_CASE(c));
	
	return 0;
}
