// 编写一个判断质数的函数 
#include <stdio.h>

int prime(int n){
	int i, j;
	
	if(n % 2 == 0)
		return 0;
	else
		for(i = 0; i * i < n; ++i){
			for(j = i + 1; j < n; ++j){
				if( i * j == n)
					return 0;
			}
		}
	
	return 1;
}

int main(void){
	int n, isPrime;
	
	printf("请输入您需要判断的整数:\n");
	scanf("%i", &n);
	
	isPrime = prime(n);
	
	if(isPrime)
		printf("%i是质数", n);
	else
		printf("%i是素数", n); 
}
