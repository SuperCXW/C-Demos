// 验证标准库函数isupper,isalpha和isdigit
#include <stdio.h>
#include <ctype.h>

int main(void){
	char a = 'A', b = 'b', c = '6';
	
	printf("%i\n", isupper(a));
	printf("%i\n", isalpha(b));
	printf("%i\n", isdigit(c));
	
	return 0;
}
