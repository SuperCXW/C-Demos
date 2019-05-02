// 编写dictionarySort函数，对10.9的字典进行排序
#include <stdio.h>
#include <stdbool.h>

struct entry{
	char word[15];
	char definition[50];
};

int compareStrings(const char s1[], const char s2[]){
	int i = 0, answer;
	
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;
	if(s1[i] < s2[i])
		answer = -1;
	else if(s1[i] == s2[i])
		answer = 0;
	else answer = 1;
	
	return answer;
}
	
void dictionarySort(struct entry dict[10]){
	int compareStrings(const char s1[], const char s2[]);
	struct entry temp;
	int i, j, answer;
	
	for(i = 0; i < 9; ++i)
		for(j = i + 1; j < 10; ++j){
			answer = compareStrings(dict[i].word, dict[j].word);
			if(answer == -1){
				temp = dict[i];
				dict[i] = dict[j];
				dict[j] = temp;
			}	
		}
}

int main(void){
	void dictionarySort(struct entry dict[10]);
	int i;
	struct entry dictionary[10] = {
		{"abyss", "a bottomless pit"},
		{"acumen", "mentally sharp; keen"},
		{"aardvark", "a burrowing African mamal"},
		{"agar", "a jelly made from seaweed"},
		{"ahoy", "a nautical call of greeting"},
		{"aigrette", "an ornamental cluster of feathers"},
		{"addle", "to become confused"},
		{"aerie", "a high nest"},
		{"affix", "to append; attach"},
		{"ajar", "partially opened"},
	};
	
	dictionarySort(dictionary);

	for(i = 0; i < 10; ++i)
		printf("%s\n", dictionary[i].word);

	return 0;
}
