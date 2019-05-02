// 编写insertString函数，将某个字符串插入到另外一个字符串中
#include <stdio.h>

void insertString(char source[], const char insertChars[], int start){
	int i, j;
	char result[81];
	
	for(i = 0; i < start; ++i)
		result[i] = source[i];
	for(i = 0; insertChars[i] != '\0'; ++i)
		result[start + i] = insertChars[i];
	for(j = 0; source[j] != '\0'; ++j)
		result[start + i +j] = source[start + j];
			
	result[start + i + j] = '\0';
	
	for(j = 0; result[j] != '\0'; ++j)
		source[j] = result[j];
	source[j] = '\0';
}

int main(void){
	void insertString(char source[], const char insertChars[], int start);
	char text[] = "the wrong son";
	
	insertString(text, "per", 10);
	printf("%s", text);
	
	return 0;
}
