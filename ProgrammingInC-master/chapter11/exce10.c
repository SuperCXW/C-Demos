// 用字符指针代替数组来实现compareStrings函数
#include <stdio.h>

int compareStrings(const char *s1, const char *s2){
 	int answer;
 	
 	while(*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
 		++s1, ++s2;
 	if(*s1 < *s2)
 		answer = -1;
 	else if(*s1 == *s2)
 		answer = 0;
 	else answer = 1;

	return answer;
 }

int main(void){
	int compareStrings(const char *s1, const char *s2);
	
	printf("%i", compareStrings("hello", "hall"));
	
	return 0;
}
