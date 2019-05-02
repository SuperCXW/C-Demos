// 定义宏IS_ALPHABETIC，检查某个字符是否是字母，是则返回非0值，否则返回0.
#include <stdio.h>
#include "exce.h"

int main(void){
	char c = '0';
	
	printf("%i\n", IS_ALPHABETIC(c));
	
	return 0;
}

