// �û�������Ҫ��������������ĸ��� 
#include <stdio.h>

int main (void){
	int i, n, number, triangularNumber, counter;
	
	printf("����������Ҫ��������������ĸ�����");
	scanf("%i", &counter);
	
	for(i = 1; i <= counter; i++){
		printf("What triangluar number do you want? ");
		scanf ("%i", &number);
	
		triangularNumber = 0;
	
		for( n = 1; n <= number; n++){
			triangularNumber += n;
		}
	
		printf("Triangular number %i is %i\n", number, triangularNumber);
	}
		
	return 0;	
	
}
