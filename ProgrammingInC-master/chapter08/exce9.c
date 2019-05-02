// ������С������ 
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
	
	printf("������������Ҫ������С������������������:\n");
	scanf("%i %i", &u, &v);
		
	printf("%i��%i����С������Ϊ:%i\n", u, v, lcm(u, v));
		
	return 0;
}
