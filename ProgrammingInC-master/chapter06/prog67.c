// 对终端输入的字符进行分类
#include <stdio.h>

int main(void){
	char c;
	
	printf("Enter s single character:\n");
	scanf("%c", &c);
	
	// 可使用标准库函数islower、isupper来判断 
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		printf("It's a alphabetic character.\n'");
	}else if(c >= '0' && c <= '9'){
		printf("It's a digit.\n");
	}else{
		printf("It's a special character.\n");
	}
	
	return 0;
} 
