// 读取一行数据的函数
#include <stdio.h>

int main(void) {
	int i;
	char line[81];
	void readLine(char buffer[]);
	
	for(i = 0; i < 3; ++i){
		readLine(line);
		printf("%s\n\n", line);
	}
	
	return 0;
}

// 从终端读取一行文字的函数
void readLine (char buffer[]){
	char character;
	int i = 0;
	
	do{
		character = getchar();
		buffer[i] = character;
		++i;
	}while(character != '\n');
	
	// 循环最后一次执行的时候，循环变量已经增加过了。
	buffer[i - 1] = '\0';
}
