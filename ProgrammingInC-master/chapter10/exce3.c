// 修正将包含(')的单词作为两个单词处理，并且使之能够处理正负号开头的、并包含逗号的数字
// 计算一段文本的单词数目的函数
#include <stdio.h>
#include <stdbool.h>

// 判断一个字符是否是字母的函数
bool alphabetic(const char c){
	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
		return true;
	else
		return false;
}

bool numeric(const char c){
	if(c >= '0' && c <= '9')
		return true;
	else
		return false;
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
	
	buffer[i - 1] = '\0';
}

// 计算一个字符串中单词数的函数
int countWords(const char string[]){
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic(const char c);
	bool numeric(const char c);
	
	for(i = 0; string[i] != '\0'; ++i){
		if(alphabetic(string[i]) || numeric(string[i])){
			if(lookingForWord){
				++wordCount;
				lookingForWord = false;
			}
		}
		else if(string[i] == ',' || string[i] == '\'' || string[i] == '-')
			continue;
		else
			lookingForWord = true;
	}
	
	return wordCount;
}

int main(void){
	int countWords(const char string[]);

	const char text1[] = "-$20,000.";
	const char text2[] = "And here we go... again.";
	char i = '$';

	printf("%s - words = %i\n",text1,countWords(text1));
	printf("%s - words = %i\n",text2,countWords(text2));
	printf("%i - $", i);

	return 0;
}
