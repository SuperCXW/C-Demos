#include <stdio.h>

int main (void){
	float a = (3.31 * 10 - 8 * 2.01 * 10 - 7);
	float b = (7.16 * 10 - 6 + 2.01 * 10 - 8);
	float answer;
	
	answer = a / b;
	printf ("(3.31 * 10 - 8 * 2.01 * 10 - 7) / (7.16 * 10 - 6 + 2.01 * 10 - 8) \n = %e\n", answer);
		
	return 0;
}
