// 编写substring函数，从字符串中裁剪出特定的部分
#include <stdio.h>

void substring(const char source[81], int start, int count, char result[81]){
	int i;
	for(i = 0; i < count && source[i] != '\0'; ++i)
		result[i] = source[i + start];
	result[i] = '\0';
	
	printf("The new string is %s.\n", result);
}

int main(void){
	void substring(const char source[81], int start, int count, char result[81]);
	char result[81];
	
	substring("character", 4, 3,  result);
	
	return 0;
}
