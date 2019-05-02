// 将函数的形式参数声明为一个指针类型，作为一个指向数组的指针使用
// 计算整数数组所有元素之和的函数

#include <stdio.h>

int arraySum(int *array, const int n){
	int sum = 0;
	int * const arrayEnd = array + n;
	
	// array本身值的修改不会影响数组values的内容
	for(; array < arrayEnd; ++array)
		sum += *array;
	
	return sum;
}

int main(void){
	int arraySum(int *array, const int n);
	int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
	
	printf("The sum is %i\n", arraySum(values, 10));
	return 0;
}
