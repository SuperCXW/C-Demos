// 用指针来计算字符串的长度
#include <stdio.h>

int stringLength(const char *string){
	const char *cptr = string;
	while(*cptr)
		++cptr;
	return cptr - string;
}

int main(void){
	int stringLength(const char *string);
	
	printf("%i ", stringLength("stringLength test"));
	printf("%i ", stringLength(""));
	printf("%i\n", stringLength("complete"));
	
	return 0;
}
