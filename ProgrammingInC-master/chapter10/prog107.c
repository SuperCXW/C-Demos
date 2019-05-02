// 判断一个字符是否为字母的函数
#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c){
	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

/*计算一个字符串中单词数的函数*/
int countWords(const char string[]){
	int i, wordCount = 0;
	// lookinfForWord，标志位，表示当前程序是否正在查找一个新词的开始字母。
	bool lookingForWord = true, alphabetic(const char c);
	
	for(i = 0; string[i] != '\0'; ++i){
		if(alphabetic(string[i])){
			if(lookingForWord){
				++wordCount;
				// 扫描到首字母计数器加1后，标志位设置为false，
				// 不进行任何处理，对字符串字母的循环继续遍历
				lookingForWord = false;
			}
		}
		// 遍历到空格或其他情况时，标志位设置为true，开始扫描新字符串
		else
			lookingForWord = true;
	}
	return wordCount;
}

int main(void){
	const char text1[] = "Well, here goes.";
	const char text2[] = "And here we go... again.";
	int countWords(const char string[]);
	
	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));
	
	return 0;
	
}
