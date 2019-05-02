// 生成质数表的程序(增订版) 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int p, d;
	bool isPrime;
	
	for(p = 2; p <= 50; ++p){
		isPrime = true;
		// 排除大于2的偶数 
		if(p > 2 && p % 2 == 0){
			isPrime = false;
		}
		else{
			// 循环条件增加isPrime的判断，避免出现非质数后p继续除以d。 
			for(d = 2; d < p && isPrime == true; ++d)
				if(p % d == 0)
					isPrime = false;
		}
			
		if(isPrime != false)
			printf("%i ", p);
	}
	
	printf("\n");
	return 0;
} 
