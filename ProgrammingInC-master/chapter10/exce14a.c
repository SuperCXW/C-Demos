#include <stdio.h>
void intToStr(int value,char string[])
{
	int i = 0,j = 0,right_digit;
	char intString[32];

	if(value < 0){
		value *= -1;
		string[0] = '-';
		j = 1;
	}

	do{
		right_digit = value % 10;
		intString[i] = right_digit;
		++i;
		value /= 10;
	}while(value);

	--i;

	while(i >= 0){
		string[j] = intString[i] + '0';
		++j;
		--i;
	}

	string[j] = '\0';
}

int main(void)
{
	void intToStr(int value,char string[]);

	char text1[8];
	char text2[8];
	intToStr(123,text1);
	intToStr(-123,text2);
	printf("%s\n",text1);
	printf("%s\n",text2);

	return 0;
}
