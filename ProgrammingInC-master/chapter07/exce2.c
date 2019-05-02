// 使用for循环将数组values中的元素初始值设为0 
#include <stdio.h>

int main(void){
	int values[10];
	int index;
	
	for(index = 0; index < 10; ++index){
		values[index] = 0;
		printf("values[%i] = %i\n", index, values[index]);
	}
	
	return 0;
} 
