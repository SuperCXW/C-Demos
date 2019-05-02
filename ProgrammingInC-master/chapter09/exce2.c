// 计算两个任意日期之间的天数
#include <stdio.h>

struct date{
	int year;
	int month;
	int day;
};

int f(int year, int month){
	if(month <= 2)
		return (year - 1);
	else
		return year;
};

int g(int month){
	if(month <= 2)
		return (month + 13);
	else
		return (month + 1);
};

int calculateN(struct date someDay){
	int N;
	
	N = 1461 * f(someDay.year, someDay.month) / 4 + 153 * g(someDay.month)  / 5 + someDay.day;
	
	// 对于1800年3月1日到1900年2月28日之间的日期来说，N值需要+1；
	// 对于1700年3月1日到1800年2月28日之间的日期来说，N值需要+2；
	// 如何描述出这之间的日期？
	
	return N;
};

int main(void){
	int n1, n2;
	struct date day1, day2;
	int calculateN(struct date someDay);
	
	printf("请输入第一个日期: (yyyy/mm/dd) \n");
	scanf("%i /%i /%i", &day1.year, &day1.month, &day1.day);
	n1 = calculateN(day1);
	printf("第一天的N值为: %i \n", n1);
	
	printf("请输入第二个日期: (yyyy/mm/dd) \n");
	scanf("%i /%i /%i", &day2.year, &day2.month, &day2.day);
	n2 = calculateN(day2);
	printf("第二天的N值为: %i \n", n2);
	
	printf("这两个日期之间的天数是: %i\n", (n2 - n1));
	
	return 0;
}
