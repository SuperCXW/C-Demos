// 产生质数表(修订版2)
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int p, i, primes[50], primeIndex = 2;
	bool isPrime;
	
	primes[0] = 2;
	primes[1] = 3;
	
	for(p = 5; p <= 50; p = p + 2){
		isPrime = true;
		
		// 任何一个非质数的整数，肯定会有一个小于其平方根的质因数。 
		// 且任何一个非质整数都可以分解成多个质数的积。 
		// 判断某个数是否为质数时，只需要尝试那些小于其平方根的质数。 
		for(i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
			if(p % primes[i] == 0)
				isPrime = false;
		
		if(isPrime == true){
			primes[primeIndex] = p;
			++primeIndex;
		}
	}
	
	for(i = 0; i  < primeIndex; ++i)
		printf("%i ", primes[i]);
			
	printf("\n");
		
	return 0;
} 
