// 使用3个变量计算Fibonacci数
#include <stdio.h>

int main(void){
	int i, fib_1 = 0, fib_2 = 1, fib_3;
	
	printf("%i\n%i\n", fib_1, fib_2);
	
	for(i = 2; i < 15; ++i){
		fib_3 = fib_1 + fib_2;
		printf("%i\n", fib_3);
		fib_1 = fib_2;
		fib_2 = fib_3;
	}
		
	return 0;
} 
