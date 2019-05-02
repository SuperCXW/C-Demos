// 编写简单的计算器，操作符：+ - * / S E，S为记忆数字，E为结束运行。
#include <stdio.h>

int main(void){
	float a;
	float remNumber;
	char operator;
	
	printf("Begin Calculations \n");
	
	while(operator != 'E'){
		scanf("%f %c", &a, &operator);
	
		switch(operator){
			case 'S':
				remNumber = a;
				printf("%f \n", remNumber);
				break;
			case '/':
				if(a == 0)
					printf("除数不能为0");
				else
					remNumber /= a;
					printf("%f \n", remNumber);
				break;
			case '*':
				remNumber *= a;
				printf("%f \n", remNumber);
				break;
			case '-':
				remNumber -= a;
				printf("%f \n", remNumber);
				break;
			case '+':
				remNumber += a;
				printf("%f \n", remNumber);
				break;
			case 'E':
				break;
			default:
				printf("未知的操作符!");
				break;
		}
	}
	
	printf("End of Calculations. \n");
	
	return 0;
} 
