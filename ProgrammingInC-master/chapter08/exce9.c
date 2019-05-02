// 计算最小公倍数 
#include <stdio.h>

int gcd(int u, int v){
	int temp;
	
	while(v != 0){
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
} 

int lcm(int u, int v){
	int result;
	
	result = u * v / gcd(u, v);
	
	return result;
}

int main(void){
	int u, v;
	
	printf("请依次输入需要求其最小公倍数的两个正整数:\n");
	scanf("%i %i", &u, &v);
		
	printf("%i和%i的最小公倍数为:%i\n", u, v, lcm(u, v));
		
	return 0;
}
