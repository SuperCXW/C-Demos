// 计算拥有10个元素的浮点数数组中所有元素的平均值
#include <stdio.h>

int main(void){
	int i;
	float sum;
	float average = 0;
	float numbers[10];
	
	for(i = 0; i < 10; ++i){
		numbers[i] = i + (float)(i + 1) / 10;
		printf("%2f ", numbers[i]);
		sum += numbers[i];
	}
	
	average = sum / 10;
	
	printf("The average is %2f \n", average);
	
	return 0;
} 
