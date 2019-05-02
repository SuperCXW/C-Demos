// 使用gdb调试的一个简单程序
#include <stdio.h>
int main(void){
	const int data[5] = {1, 2, 3, 4, 5};
	int i, sum;
	
	for(i = 0; i >= 0; ++i)
		sum += data[i];
		
	printf("sum = %i\n", sum);
	return 0;
}
