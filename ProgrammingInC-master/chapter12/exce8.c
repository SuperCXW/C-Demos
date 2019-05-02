// 编写函数bitpat_set，将一个特定值赋给一个无符号数中的指定位串。
// 有4个参数，第一个参数是一个指针，指向一个unsigned int，对这个无符号整数中的指定位串进行设置；
// 第二个参数是一个unsigned int，这个无符号数就是将要设置的值；
// 第三个参数为int，指定开始位(最左边的位数是0)；
// 第四个参数为int，指定域的长度。
// 对于一个int的长度不做任何假设。

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
