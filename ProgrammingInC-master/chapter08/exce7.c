// �����������������η�
#include <stdio.h>

long int x_to_the_n(int x, int n){
	long int result = 1;
	while(n > 0){
		result *= x;
		--n;
	}
	return result;
} 

int main(void){
	int x, n;
	printf("�����������������η��������������ʹη���:\n");
	scanf("%i %i", &x, &n);
	
	printf("%i��%i�η�Ϊ:%i\n", x, n, x_to_the_n(x, n));
	return 0;
}
