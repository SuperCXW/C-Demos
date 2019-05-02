// 演示二进制与运算的程序
#include <stdio.h>

int main(void){
	unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;
	
	printf("%o ", word1 & word2); 
	printf("%o ", word1 & word1); // 与自己进行按位与运算的结果还是它自己。
	printf("%o ", word1 & word2  &word3);
	printf("%o\n", word1 & 1); // 提取最右一位，便于判断奇数偶数。
	
	return 0;
}
