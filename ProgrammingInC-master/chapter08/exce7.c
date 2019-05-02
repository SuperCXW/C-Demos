// 计算整数的正整数次方
#include <stdio.h>

long int x_to_the_n(int x, int n){
	long int result = 1;
	while(n > 0){
		result *= x;
		--n;
	}
	return result;
} 

int main(void){
	int x, n;
	printf("计算整数的正整数次方，请输入整数和次方数:\n");
	scanf("%i %i", &x, &n);
	
	printf("%i的%i次方为:%i\n", x, n, x_to_the_n(x, n));
	return 0;
}
