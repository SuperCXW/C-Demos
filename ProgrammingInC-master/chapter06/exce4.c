// ��д�򵥵ļ���������������+ - * / S E��SΪ�������֣�EΪ�������С�
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
					printf("��������Ϊ0");
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
				printf("δ֪�Ĳ�����!");
				break;
		}
	}
	
	printf("End of Calculations. \n");
	
	return 0;
} 
