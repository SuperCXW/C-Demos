#include <stdio.h>

int main (void){
	int i1 = 365, j1 = 7;
	int i2 = 12258, j2 = 23;
	int i3 = 996, j3 = 4;
	
	int Next_multiple_1 = i1 + j1 - i1 % j1;
	int Next_multiple_2 = i2 + j2 - i2 % j2;
	int Next_multiple_3 = i3 + j3 - i3 % j3;
	
	printf ("Next_multiple_1 is %i\n", Next_multiple_1);
	printf ("Next_multiple_2 is %i\n", Next_multiple_2);
	printf ("Next_multiple_3 is %i\n", Next_multiple_3);
	
	return 0;
}
