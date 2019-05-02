// 编写sort3的函数，可以对三个整数按升序进行排列
#include <stdio.h>

void sort3(int *a, int *b, int *c){
	int temp;
	
	if(*a > *b){
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if(*b > *c){
		temp = *b;
		*b = *c;
		*c = temp;
	}
	if(*a > *c){
		temp = *a;
		*a = *c;
		*c = temp;
	}
}

int main(void){
	void sort3(int *a, int *b, int *c);
	int a = 10, b = 3, c = 5;
	
	printf("Before: a = %i, b = %i, c = %i\n", a, b, c);
	
	sort3(&a, &b, &c);
	
	printf("After: a = %i, b = %i, c = %i\n", a, b, c);
	
	return 0;
}
