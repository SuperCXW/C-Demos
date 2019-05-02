// 计算一段文本的单词数目的函数
#include <stdio.h>
#include <stdbool.h>

// 判断一个字符是否是字母的函数
bool alphabetic(const char c){
	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	
	for(i = 0; string[i] != '\0'; ++i){
		if(alphabetic(string[i])){
			if(lookingForWord){
				++wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;
	}
	
	return wordCount;
}

// 用户输入最后一行文字以后，再额外多输入一个空行
// readLine函数读取到该空行时，程序将再用作缓冲区的数组的第一个位置上存储一个空字符
// 缓冲区的数组的第一个位置不是已经存放字符了么？空字符不会覆盖它？
int main(void){
	char text[81];
	int totalWords = 0;
	int countWords(const char string[]);
	void readLine(char buffer[]);
	bool endOfText = false;
	
	printf("Type in your text.\n");
	printf("When you are done, press 'RETURN'.\n\n");
	
	while(! endOfText){
		readLine(text);
		if(text[0] == '\0')
			endOfText = true;
		else
			totalWords += countWords(text);
	}
	printf("\nThere are %i words in the above text.\n", totalWords);
	
	return 0;
}
