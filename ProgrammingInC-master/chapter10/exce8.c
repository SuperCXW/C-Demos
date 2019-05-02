// 编写replaceString函数，将findString，removeString和insertString这三个函数组合起来
#include <stdio.h>
#include <string.h>

int findString(const char source[],const char destination[]){
	int i,j;
	
	for(i = 0; source[i] != '\0'; ++i){
		j = 0;
		while(source[i+j] == destination[j] && destination[j] != '\0')
			++j;
		if(destination[j] == '\0')
			return i;
	}

	return -1;
}

void removeString(char source[], int start, int counts){
	int i;
	
	if(counts < 0 || start == -1)
		return;
	
	for(i = 0; source[start + counts +i] != '\0'; ++i)
		source[start + i] = source[start + counts + i];
		
	source[start + i] = '\0';
}

void insertString(char source[], const char insertChars[], int start){
	int i, j;
	char result[81];
	
	if(start == -1)
		return;
	
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

void replaceString(char source[], const char s1[], const char s2[]){
	int findString(const char source[],const char destination[]);
	void removeString(char source[], int start, int counts);
	void insertString(char source[], const char insertChars[], int start);
	int start;
	
	start = findString(source, s1);
	
	removeString(source, start, strlen(s1));
	
	insertString(source, s2, start);
	
	printf("%s", source);
}

int main(void){
	void replaceString(char source[], const char s1[], const char s2[]);
	char text1[] = "the wrong person";
	char text2[] = "per";
	char text3[] = "";
	
	replaceString(text1, text2, text3);
	
	return 0;
}
