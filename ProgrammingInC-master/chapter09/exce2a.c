#include <stdio.h>

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

int main(void){
    long int daysOfDate(struct date d);
    struct date d1,d2;

    printf("Input date (yyyy mm dd): ");
    scanf("%i %i %i",&d1.year,&d1.month,&d1.day);

    printf("Input next date (yyyy mm dd): ");
    scanf("%i %i %i",&d2.year,&d2.month,&d2.day);

    printf("The days between the two date is: %li\n",
                            daysOfDate(d2) - daysOfDate(d1));
    return 0;
}
