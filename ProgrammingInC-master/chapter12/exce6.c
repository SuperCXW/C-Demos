/* 编写函数bitpat_search(source, pattern, n)
 * 函数从最左一位开始搜索整数source，看pattern的最右边的n位是否在source中。
 * 如果找到了pattern，函数返回pattern在source中开始的位数编号，没找到则返回-1。
*/
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

int bit_test(unsigned int test, int n){
	if(n < 0 || n > 32)
		return 0;
	if((test >> (31 - n)) & 0x1)
		return 1;
	else
		return 0;
}

int bitpat_search(unsigned int source, unsigned int pattern, int n){
	int bit_test(unsigned int test, int n);
	int int_size();
	int i, j, size;
	
	size = int_size();
	
	for(i = 0; i <= size - n; ++i){
		if(bit_test(source, i) == bit_test(pattern, 1)){
			j = 1;
			while(bit_test(source, i + j) == bit_test(pattern, 1 + j))
				++j;
			if(j == n)
				return i;
		}
	}
	
	return -1;
}

int main(void){
	int bitpat_search(unsigned int source, unsigned int pattern, int n);
	unsigned int source = 0xe1f4;
	unsigned int pattern_1 = 0x5;
	unsigned int pattern_2 = 0xf;
	int index_1, index_2;
	
	index_1 = bitpat_search(source, pattern_1, 3);
	index_2 = bitpat_search(source, pattern_2, 4);
	
	printf("%i\n", index_1);
	printf("%i\n", index_2);
	
	return 0;
}
