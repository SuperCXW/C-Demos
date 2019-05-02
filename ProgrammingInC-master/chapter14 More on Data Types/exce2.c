// 编写一个名为monthName的函数，该函数接收一个enum month类型的参数
// 然后返回一个指向该月份名字的字符指针?
#include <stdio.h>

enum month {january = 1, february, march, april, may, june,
		july, august, september, october, novermber, december };

char (*) monthName(enum month aMonth){
	return &aMonth;
}

int main(void){
	enum month aMonth;
	
	printf("Enter month number: ");
	scanf("%i", &aMonth);
	
	printf("%s\n", monthName(aMonth));
	
	return 0;
}
