// 不能打印出来
#include <stdio.h>
#define printint(n) printf("%i\n", x ## n)

int main(void){
	int i;
	
	for(i = 1; i < 100; ++i)
		printx(i);
		
	return 0;
}
