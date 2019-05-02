// 编写bit_test函数，两个参数，一个无符号整数和一个位数n。
// 当该无符号数的第n位为1时，令函数返回1；当第n位为0时返回0(左起算第n位)。
// 相应地编写bit_set，参数同上，将第n位设置为1，并返回设置的结果。
#include <stdio.h>

int bit_test(unsigned int test, int n){
	if(n < 0 || n > 32)
		return 0;
	if((test >> (31 - n)) & 0x1)
		return 1;
	else
		return 0;
}
unsigned int bit_set(unsigned int test, int n){
	if(n < 0 || n > 32)
		return 0;
		
	return test | (1 << (31 - n));
}

int main(void){
	int bit_test(unsigned int test, int n);
	unsigned int bit_set(unsigned int test, int n);
	unsigned int word1 = 0xffffff0fu;
	
	printf("%i\n", bit_test(word1, 23));
	
	printf("%x\n", bit_set(word1, 24));
	
	return 0;
}
