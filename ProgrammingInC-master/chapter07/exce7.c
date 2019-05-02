// ������ɫ��ɸ����(Sieve of Erastosthenes)����150�������е����� 
// ע��n�����鳤��Ӧ�÷ֿ����� 
#include <stdio.h>

int main(void){
	int i, j, n = 150; 
	int P[151];
	
	// ��ʼ�����飬������2��ʼ 
	for(i = 2; i < n; ++i){
		P[i] = 0;
	}

	for(i = 2; i < n; ++i){
		if(P[i] == 0)
			printf("%i ", i);
		
		// ɸ�������п��Էֽ����������˵���������ɸ������ 
		for(j = 1; i * j <= n; ++j)
			P[i * j]  = 1;	
	}
	
	return 0;
}
