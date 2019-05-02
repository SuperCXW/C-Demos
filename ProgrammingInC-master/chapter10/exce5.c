// 编写findString函数，检查一个字符串是否包含另外一个字符串，失败
#include <stdio.h>

int findString(const char source[], const char search[]){
	int i, j;
	
	for(i = 0; source[i] != '\0'; ++i){
		for(j = 0; search[j] != '\0'; ++j)
			if(source[i + j] == search[j])
				return i;
	}
		
	return -1;
}

int main(void){
	int findString(const char source[], const char search[]);
	
	printf("%i", findString("a chatterbox", "hoat"));
	
	return 0;
}
