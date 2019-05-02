#include <stdio.h>

int main (void){
	int f = 27;
	float c;
	
	c = (f - 32) / 1.8;
	
	printf ("华氏27度为摄氏度 %f 度", c);
	
	return 0;
}
