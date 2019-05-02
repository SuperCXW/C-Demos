// 实现一个旋转移位的函数
#include <stdio.h>

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

// 将无符号整数旋转左移或右移的函数

unsigned int rotate(unsigned int value, int n){
	unsigned int result, bits;
	
	// 缩减移动的位数到指定范围
	if(n > 0)
		n = n % 32;
	else
		n = -(n % 32);
	
	if(n == 0)
		result = value;
	else if(n > 0){ // 左旋
		// 提取values最左边的n位，通过将value向右移动(整数的长度-n)位来完成
		bits = value >> (32 - n);
		// 然后将value左移左移n位，之后将提取的位(bits)与value最右边的相应位进行或运算并将结果存回数据
		result = value << n | bits;
	}
	else{ // 右旋
		n = -n;
		bits = value << (32 - n);
		result = value >> n | bits;
		
	}
	
	return result;
}
