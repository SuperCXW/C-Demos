// 编写uppercase的函数
#include <stdio.h>

void uppercase(char source[]){
	int i;
	for(i = 0; source[i] != '\0'; ++i)
		if(source[i] >= 'a' && source[i] <= 'z')
			source[i] = source[i] - 'a' + 'A';
}

int main(void){
	void uppercase(char source[]);
	char text[] = "hello world!";
	
	uppercase(text);
	
	printf("%s", text);
	
	return 0;
}
