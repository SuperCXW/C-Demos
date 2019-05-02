// 结构指针应用程序
// 指向结构的指针 (*x).y可以用结构指针运算符表示为x->y

#include <stdio.h>

int main(void){
	struct date{
		int month;
		int day;
		int year;
	};
	
	struct date today, *datePtr;
	
	datePtr = &today;
	
	datePtr->month = 3;
	datePtr->day = 30;
	datePtr->year = 2016;
	
	printf("Today's date is %i/%i/%.2i.\n",
				datePtr->month, datePtr->day, datePtr->year % 100);
	
	return 0;
}
