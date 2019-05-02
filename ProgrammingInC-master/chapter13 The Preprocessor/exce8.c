// 定义宏IS_DIGIT，检查某个字符是否是数字，是则返回非0值，否则返回0.
// 定义IS_SPECIAL，判断是否是特殊字符
#include <stdio.h>
#include "exce.h"

int main(void){
	char a = '1', b = '$';
	
	printf("%i\n", IS_DIGIT(a));
	printf("%i\n", IS_SPECIAL(b));
	
	return 0;
}

