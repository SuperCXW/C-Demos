//  将9.4中的dateUpdate函数替换为使用复合字面量的版本

#include <stdio.h>
#include <stdbool.h>

struct date{
	int month;
	int day;
	int year;
};

// 计算下一天日期的函数
struct date dateUpdate(struct date today){
	struct date tomorrow;
	int numberOfDays(struct date d);
	
	if(today.day != numberOfDays(today)){
		tomorrow = (struct date){today.month, today.day + 1, today.year};
	}
	else if(today.month == 12){
		tomorrow = (struct date){1, 1, today.year + 1};
	}
	else{
		tomorrow = (struct date){today.month + 1, 1, today.year};
	}
	
	return tomorrow;
}

// 查找一月中日期数的函数
int numberOfDays(struct date d){
		int days;
		bool isLeapYear(struct date d);
		const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		
		if(isLeapYear(d) && d.month == 2)
			days = 29;
		else
			days = daysPerMonth[d.month - 1];
		
		return days;
}

// 判断是否为闰年的函数
bool isLeapYear(struct date d){
	bool leapYearFlag;
	
	if((d.year % 4 == 0 && d.year % 100 != 0 )|| d.year % 400 == 0)
		leapYearFlag = true; // 闰年
	else
		leapYearFlag = false; // 非闰年
			
	return leapYearFlag;
}

int main(void){
	struct date dateUpdate(struct date today);
	struct date thisDay, nextDay;
	
	printf("Enter today's date (mm dd yyyy) \n");
	scanf("%i /%i /%i", &thisDay.month, &thisDay.day, &thisDay.year);
	
	nextDay = dateUpdate(thisDay);
	
	printf("Tomorrow's date is %i /%i /%.2i.\n", nextDay.month, 
		nextDay.day, nextDay.year % 100);
		
	return 0;
}
	
