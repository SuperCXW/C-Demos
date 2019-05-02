// 使用枚举类型
// 打印一个月中的每一天的程序
#include <stdio.h>

int main(void){
	enum month {january = 1, february, march, april, may, june,
		july, august, september, october, novermber, december };
	enum month aMonth;
	int days;
	printf("Enter month number: ");
	scanf("%i", &aMonth);
	switch(aMonth){
		case january:
		case march:
		case may:
		case july:
		case august:
		case october:
		case december:
			days = 31;
			break;
		case april:
		case june:
		case september:
		case novermber:
			days = 30;
			break;
		case february:
			days = 28;
			break;
		default:
			printf("bad month numbe\n");
			days = 0;
			break;
	}
	if(days != 0)
		printf("Number of days is %i\n", days);
	if(aMonth == february)
		printf("...or 29 if it's a leap year\n");
	return 0;
}
