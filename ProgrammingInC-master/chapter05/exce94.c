// Ҫ���û����룬whileѭ����дprog54 
#include <stdio.h>

int main (void){
	int n, number, triangularNumber;
	
	printf("What triangluar number do you want? ");
	scanf ("%i", &number);
	
	triangularNumber = 0;
	
	n = 1;
	while(n <= number){
		triangularNumber += n;
		n++;
	}
	
	printf("Triangular number %i is %i\n", number, triangularNumber);
		
	return 0;	
	
}
