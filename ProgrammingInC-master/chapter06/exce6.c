// ��д������ն˶�ȡһ�����֣�Ȼ��ʹ��Ӣ����λ��ʾ��λ����
#include <stdio.h>

int main(void){
	int i, number, num_1, num_2, digit;
	
	// ����������λ������Ȼif�������һֱ��ȥ���ݹ飿��������ָ���� 
	printf("������1000���ڵ�����һ��������\n"); 
	scanf("%i", &number);
	
	if(number < 10){
		switch(number){
			case 0:
				printf("zero");
				break;
			case 1:
				printf("one");
				break;
			case 2:
				printf("two");
				break;
			case 3:
				printf("three");
				break;
			case 4:
				printf("four");
				break;
			case 5:
				printf("five");
				break;
			case 6:
				printf("six");
				break;
			case 7:                                                                                                                                                                                                               
				printf("seven");
				break;
			case 8:
				printf("eight");
				break;
			case 9:
				printf("nine");
				break;	
			default:
				printf("�Ƿ��ַ�");
				break;
		}
	}
	else if(number >= 10 && number < 100){
		switch(number / 10 % 10){
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;	
			default:
				printf("�Ƿ��ַ�");
				break;
		}
		
		switch(number % 10){
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;	
			default:
				printf("�Ƿ��ַ�");
				break;
		}
		
	}
	else if(number < 1000 && number >= 100){
		switch(number / 100 % 10){
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;	
			default:
				printf("�Ƿ��ַ�");
				break;
		}
		
		switch(number / 10 % 10){
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;	
			default:
				printf("�Ƿ��ַ�");
				break;
		}
		
		switch(number % 10){
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;	
			default:
				printf("�Ƿ��ַ�");
				break;
		}	
	}
	return 0;
} 
