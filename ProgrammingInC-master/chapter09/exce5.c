// clockKeeper
// 以秒为单位更新时间的程序
#include <stdio.h>
#include <stdbool.h>

struct time{
	int hour;
	int minutes;
	int seconds;
} ;

// 以秒为单位更新时间的函数
struct time timeUpdate(struct time now){
	++now.seconds;
	if(now.seconds == 60){
		now.seconds = 0;
		++now.minutes;
		
		if(now.minutes == 60){
			now.minutes = 0;
			++now.hour;
			
			if(now.hour == 24)
				now.hour = 0;
		}
	}
	return now;
}

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
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if(today.month == 12){
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
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

struct dateAndTime{
	struct time now;
	struct date d;
};

struct dateAndTime clockKeeper (struct dateAndTime dat){
	struct time timeUpdate(struct time now);
	struct date dateUpdate(struct date d);
	
	dat.now = timeUpdate(dat.now);
	// 时间过午夜则更新日期
	if(dat.now.hour == 0)
		dat.d = dateUpdate(dat.d);
		
	return dat;
};

int main(void){
	struct dateAndTime clockKeeper(struct dateAndTime dat);
	struct dateAndTime dat;
	
	// 使用复合字面量赋值
	dat.now = (struct time){23, 59, 59};
	dat.d = (struct date){2, 28, 2016};
	
	dat = clockKeeper(dat);
	
	printf("%i:%i:%i: %i/%i/%i", dat.now.hour, dat.now.minutes, dat.now.seconds,
		dat.d.month, dat.d.day, dat.d.year);
		
	return 0;
}
