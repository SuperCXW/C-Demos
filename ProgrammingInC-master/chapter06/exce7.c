// ����������ĳ���(������) 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int p, d;
	bool isPrime;
	
	for(p = 2; p <= 50; ++p){
		isPrime = true;
		// �ų�����2��ż�� 
		if(p > 2 && p % 2 == 0){
			isPrime = false;
		}
		else{
			// ѭ����������isPrime���жϣ�������ַ�������p��������d�� 
			for(d = 2; d < p && isPrime == true; ++d)
				if(p % d == 0)
					isPrime = false;
		}
			
		if(isPrime != false)
			printf("%i ", p);
	}
	
	printf("\n");
	return 0;
} 
