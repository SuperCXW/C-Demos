// 利用习题2中的N值来计算该数字代表的日期对应的是星期几
#include <stdio.h>

// 没有字符串数组就只能用二维字符数组显示星期了
const char weeks[7][3] = {
	{'M','o','n'},  {'T','u','e'},  {'W','e','n'},  {'T','h','u'},  {'F','r','i'},  {'S','a','t'},  {'S','u','n'}
};

struct date{
    int year;
    int month;
    int day;
};

int f(int year,int month){
	// 三元运算符
    return (month <= 2) ? (year-1) : (year);
}

int g(int month){
    return (month <= 2) ? (month + 13) : (month + 1);
}

long int daysOfDate(struct date d){
    int f(int year,int month);
    int g(int month);

    return 1461 * f(d.year,d.month) / 4 + 153 * g(d.month) / 5 + d.day;
}

int weekOfDate(struct date d){
	long int daysOfDate(struct date d);
		
	int week = (daysOfDate(d) - 621049) % 7;
	
	return week;
}

int main(void){
	int i, n;
	struct date d;
	int weekOfDate(struct date d);
	
	printf("请输入一个日期: (yyyy/mm/dd)\n");
	scanf("%i / %i / %i", &d.year, &d.month, &d.day);

	n = weekOfDate(d);

	printf("该日期对应的星期名字为: ");

	for(i = 0; i < 3; ++i)
		printf("%c", weeks[n-1][i]);
		
    return 0;
}
