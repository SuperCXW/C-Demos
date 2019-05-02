// 编写removeString函数，从一个字符串中删除一定数量的字符
#include <stdio.h>

void removeString(char source[], int start, int counts){
	int i;
	
	for(i = 0; source[start + counts +i] != '\0'; ++i)
		source[start + i] = source[start + counts + i];
		
	source[start + i] = '\0';
}

int main(void){
	void removeString(char source[], int start, int counts);
	char text[] = "the wrong son";
	
	removeString(text, 4, 6);
	
	printf("%s", text);
	
	return 0;
}
