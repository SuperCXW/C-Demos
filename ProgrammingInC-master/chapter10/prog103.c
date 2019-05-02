// 连接字符串，使用'\0'
#include <stdio.h>

int main(void){
	void concat(char result[], const char str1[],  const char str2[]);
	const char s1[] = {"Test "};
	const char s2[] = {"works."};
	char s3[20];
	
	concat(s3, s1, s2);
	
	printf("%s\n", s3);
	return 0;
}

// 连接两个字符串的函数
void concat(char result[], const char str1[],  const char str2[]){
	int i, j;
	
	// 复制str1到result
	for(i = 0; str1[i] != '\0'; ++i)
		result[i] = str1[i];
	
	// 复制str2到result
	for(j = 0; str2[j] != '\0'; ++j)
		result[i + j] = str2[j];
		
	// 使用null字符作为连接字符串的结尾
	result[i + j] = '\0';
}
