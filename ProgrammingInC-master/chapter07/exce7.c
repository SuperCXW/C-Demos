// 埃拉托色尼筛网法(Sieve of Erastosthenes)产生150以内所有的质数 
// 注意n和数组长度应该分开定义 
#include <stdio.h>

int main(void){
	int i, j, n = 150; 
	int P[151];
	
	// 初始化数组，质数从2开始 
	for(i = 2; i < n; ++i){
		P[i] = 0;
	}

	for(i = 2; i < n; ++i){
		if(P[i] == 0)
			printf("%i ", i);
		
		// 筛除掉所有可以分解成两个数相乘的整数，即筛除素数 
		for(j = 1; i * j <= n; ++j)
			P[i * j]  = 1;	
	}
	
	return 0;
}
