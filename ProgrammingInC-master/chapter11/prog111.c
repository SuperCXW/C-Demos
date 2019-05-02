// 举例说明指针
#include <stdio.h>

int main(void){
	int count = 10, x;
	
	// 定义int_pointer为指向整型的指针型变量
	int *int_pointer;
	
	// 将地址运算符&应用于变量count，生成了一个指向该变量的指针，
	// 然后将该指针赋予变量int_pointer
	int_pointer = &count;
	
	// 通过指针间接第存取变量count的值
	x = *int_pointer;
	
	printf("count = %i, x = %i\n", count, x);
	
	return 0;
}
