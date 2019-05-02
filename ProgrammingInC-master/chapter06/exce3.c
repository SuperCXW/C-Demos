// 用户输入两个整数，显示第一个数除以第二个数的结果，保留3位小数 
#include <stdio.h>

int main(void){
	int a, b;
	
	printf("请输入两个整数：\n");
	scanf("%i %i", &a, &b);
	
	if(b == 0)
		printf("除数不能为0.");
	else
		printf("%i除以%i的结果为：%.3f", a, b, (float)a / b);
		
	return 0;
} 
