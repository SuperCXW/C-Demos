// 考虑负数的情况
#include <stdio.h>

int strToInt(char string[]){
	int i = 0, intValue, result = 0, isMinus= 0;
	
	if(string[0] == '-'){
		isMinus = 1;
		i = 1;
	}
	
	for(; (string[i] >= '0' && string[i] <= '9'); ++i){
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}
	
	if(isMinus){
		result = -1 * result;
	}
	
	return result;
}

int main(void){
	int strToInt(char string[]);
	
	printf("%i\n", strToInt("-245"));
	printf("%i\n", strToInt("100") + 25);
	printf("%i\n", strToInt("13x5"));
	
	return 0;
}
