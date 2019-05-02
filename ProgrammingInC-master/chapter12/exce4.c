// 实现一个旋转移位的函数(不用做任何假设)
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

// 将无符号整数旋转左移或右移的函数

unsigned int rotate(unsigned int value, int n){
	int int_size();
	unsigned int result, bits;
	int size;
	
	size = int_size();

	if(n > 0)
		n = n % size;
	else
		n = -(n % size);
	
	if(n == 0)
		result = value;
	else if(n > 0){ // 左旋
		bits = value >> (size - n);
		result = value << n | bits;
	}
	else{ // 右旋
		n = -n;
		bits = value << (size - n);
		result = value >> n | bits;
		
	}
	
	return result;
}


int main(void){
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate(unsigned int value, int n);
	
	printf("%x\n", rotate(w1, 8)); // cdef00ab
	printf("%x\n", rotate(w1, -16)); // ef00abcd
	printf("%x\n", rotate(w2, 4)); // fff1122f
	printf("%x\n", rotate(w2, -2)); // fffc448b
	printf("%x\n", rotate(w1, 0)); // abcdef00
	printf("%x\n", rotate(w1, 44)); // def00abc
	
	return 0;
}

