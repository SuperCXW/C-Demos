// 编写bitpat_get函数，提取无符号整数中指定的位串，
// 3个参数分别为unsigned int， 指定开始的位数，要提取的位数。
// 最左边的位数是0。
#include <stdio.h>

int int_size(){
	unsigned int bits;
	int size = 0;
	
	bits = ~0;
	
	while(bits){
		++size;
		bits >>= 1;
	}
	
	return size;
}
unsigned int bitpat_get(unsigned int value, int n, int count){
	int int_size();
	int word_size;
	
	word_size = int_size();
	if(n < 0 || n > word_size || count < 0 || count + n > word_size)
		return 0;
	
	// 先将value左移n位
	value <<= n;
	// 在新的value中取出count位，即右移word_size() - count位。
	return value >> (word_size - count);	
}

int main(void){
	unsigned int bitpat_get(unsigned int value, int n, int count);
	unsigned int bits;
	unsigned int value = 0xe1f4;
	int n = 27, count = 3;
	
	bits = bitpat_get(value, n, count);
	printf("%o\n", bits);
	
	return 0;
}
