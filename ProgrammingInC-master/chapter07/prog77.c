// 将一个正整数转换为其他基数
#include <stdio.h>

int main(void){
	// 常量数组 
	const char baseDigits[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	// 最多显示64位的数 
	int convertedNumber[64];
	long int numberToConvert;
	int nextDigit, base, index = 0;
	
	// 获取整数和基数
	
	printf("Number to be converted? ");
	// 长整型数的格式化输入符号: %ld 
	scanf("%ld", &numberToConvert);
	printf("Base? ");
	scanf("%i", &base);
	
	// 按基数转换整数
	
	do{
		convertedNumber[index] = numberToConvert % base;
		++index;
		numberToConvert = numberToConvert / base;
	} 
	while(numberToConvert != 0);
	
	// 逆序打印出转换后的结果
	printf("Converted number = ");
	
	for(--index; index >= 0; --index){
		nextDigit = convertedNumber[index];
		printf("%c", baseDigits[nextDigit]);
	} 
	
	printf("\n");
	return 0;
} 
