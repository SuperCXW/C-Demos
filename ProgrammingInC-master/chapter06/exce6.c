// 编写程序从终端读取一个数字，然后使用英语逐位显示该位数。
#include <stdio.h>

int main(void){
	int i, number, num_1, num_2, digit;
	
	// 限制整数的位数，不然if分类可以一直下去，递归？还是用求指数。 
	printf("请输入1000以内的任意一个整数：\n"); 
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
				printf("非法字符");
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
				printf("非法字符");
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
				printf("非法字符");
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
				printf("非法字符");
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
				printf("非法字符");
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
				printf("非法字符");
				break;
		}	
	}
	return 0;
} 
