// 显示文件所有字符的程序
// 编译运行后使用如下的命令将其输入重定向到某个文件 copyprog < infile
#include <stdio.h>

int main(void){
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
	
	return 0;
}
