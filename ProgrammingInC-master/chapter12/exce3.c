// 编写int_size函数，返回计算机上一个int所包含的位数
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

int main(void){
	int int_size();
	
	printf("%i\n", int_size()); // 32
	
	return 0;
}
