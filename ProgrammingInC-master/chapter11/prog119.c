// 运用指针修改数值
// 若是不用指针，我们就无法写出exchange函数来交换两个整型的值，
// 因为函数被限制为只能返回一个单值，另外函数不能改变它的参数
#include <stdio.h>

// int * const pint 指针常量，总是指向某个常量，指向不改变
void exchange(int * const pint1, int * const pint2){
	int temp;
	
	temp = *pint1;
	*pint1 = *pint2;
	*pint2 = temp;
}

int main(void){
	void exchange(int * const pint1, int * const pint2);
	int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;
	
	printf("i1 = %i, i2 = %i\n", i1, i2);
	
	exchange(p1, p2);
	printf("i1 = %i, i2 = %i\n", i1, i2);
	
	exchange(&i1, &i2);
	printf("i1 = %i, i2 = %i\n", i1, i2);
	
	return 0;
}
