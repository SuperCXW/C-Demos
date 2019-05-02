// 字符数组的使用
#include <stdio.h>

int main(void){
	// 声明数组的时候可以不指定数组的长度 
	char word[] = {'H', 'e', 'l', 'l', 'o', '!'};
	int i;
	
	for(i = 0; i < 6; ++i)
		printf("%c", word[i]);
	
	printf("\n");
	
	return 0;
} 
