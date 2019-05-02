// 说明位运算符的程序
// &  与，如果两个相应二进制位都为1，则结果为1，否则为0；
// |  或， 两个二进制中只要有一个为1，则结果为1，否则为0；
// ^ 异或，两个中有一个为1，但不全为1，则结果为1，否则为0；
// ~ 取反，0变1,1变0.
// 优先级：取反 -> 与 -> 异或 -> 或
#include <stdio.h>

int main(void){
	unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u;
	
	printf("%o %o %o\n", w1 & w2, w1 | w2, w1 ^ w2);
	printf("%o %o %o\n", ~w1, ~w2, ~w3);
	printf("%o %o %o\n", w1 ^ w1, w1 & ~w2, w1 | w2 | w3);
	printf ("%o %o\n", w1 | (w2 & w3), w1 | (w2 & ~w3));
	printf("%o %o \n", ~(~w1 & ~w2), ~(~w1 | ~w2)); // 德摩根定律？
	// ~(~a & ~b)等价于a | b，～(~a | ~b)等价于a & b。
	
	w1 ^= w2;
	w2 ^= w1;
	w1 ^= w2;
	printf("w1 = %o, w2 = %o\n", w1, w2);
	
	return 0;
}
