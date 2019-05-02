#include <stdio.h>

int main (void){
	float x = 2.55;
	float sum;
	
	sum = 3 * x * x * x - 5 * x * x + 6;
	printf ("3x3 - 5x2 + 6 = %f\n", sum);
		
	return 0;
}
