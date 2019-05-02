// 用指针实现readLine函数
#include <stdio.h>

void readLine(char *buffer){
	char character;
	
	do{
		character = getchar();
		*buffer++ = character;
	}while(character != '\n');
	
	// 循环最后一次执行的时候，循环变量已经增加过了。
	*(buffer - 1)= '\0';
}

int main(void) {
	int i;
	char line[81];
	void readLine(char *buffer);
	
	for(i = 0; i < 3; ++i){
		readLine(line);
		printf("%s\n\n", line);
	}
	
	return 0;
}
