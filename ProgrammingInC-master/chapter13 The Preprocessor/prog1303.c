/*使用#include的程序
 * 注意：本程序假设宏定义在metric.h的文件
 * */
#include <stdio.h>
#include "metric.h"

int main(void){
	float liters, gallons;
	
	printf("*** Liters to Gallons ***\n\n");
	printf("Enter the number of liters: ");
	scanf("%f", &liters);
	
	gallons = liters * QUARTS_PER_LITER / 4.0;
	printf("%g liters = %g gallons\n", liters, gallons);
	
	return 0;
}
