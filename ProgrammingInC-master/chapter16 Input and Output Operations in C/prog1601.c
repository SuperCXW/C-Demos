// 显示格式化字符串用法的程序
#include <stdio.h>

int main(void){
	char c = 'X';
	char s[] = "abcdefghijkmnopqrstuvwxyz";
	int i = 425;
	short int j = 17;
	unsigned int u = 0xf179U;
	long int l = 75000L;
	long long int L = 0x1234567812345678LL;
	float f = 12.978F;
	double d = -97.4583;
	char *cp = &c;
	int *ip = &i;
	int c1, c2;
	
	printf("Integers:\n");
	printf("%i %o %x %u\n", i, i, i, i); // 425 651 1a9 425
	printf("%x %x %#x %#X\n", i, i, i, i); // 1a9 1A9 0x1a9 0X1A9
	printf("%+i % i %07i %.7i\n", i, i, i, i); // +425 425 0000425 0000425
	printf("%i %o %x %u\n", j, j, j, j); // 17 21 11 17
	printf("%i %o %x %u\n", u, u, u, u); // 61817 170571 f179 61817
	printf("%ld %lo %lx %lu\n", l, l, l, l); // 75000 222370 124f8 75000
	printf("%lli %llo %llx %llu\n", L, L, L, L);
	// 1311768465173141112 110642547402215053170 1234567812345678 1311768465173141112
	
	printf("\nFloats and Doubles:\n");
	printf("%f %e %g\n", f, f, f); // 12.978000 1.297800e+001 12.978
	printf("%.2f %.2e\n", f, f); // 12.98 1.30e+01
	printf("%.0f %.0e\n", f, f); // 13 1e+01
	printf("%7.2f %7.2e\n", f, f); //  12.98 1.30e+01
	printf("%f %e %g\n", d, d, d); // -97.458300 -97.45830e+01 -97.4583
	printf("%.*f\n", 3, d); // -97.458
	printf("%*.*f\n", 8, 2, d); // -97.46
	
	printf("\nCharacters:\n"); 
	printf("%c\n", c); // X
	printf("%3c%3c\n", c, c); //   X   X
	printf("%x\n", c); // 58
	
	printf("\nStrings:\n");
	printf("%s\n", s); // abcdefghijkmnopqrstuvwxyz
	printf("%.5s\n", s); // abcde
	printf("%30s\n", s); //      abcdefghijkmnopqrstuvwxyz
	printf("%20.5s\n", s); //                abcde
	printf("%-20.5s\n", s); // abcde           
	
	printf("\nPointers:\n");
	printf("%p %p\n\n", ip, cp); // 0028FEF0 0028FF0F
	
	printf("This%n is fun.%n\n", &c1, &c2);
	printf("c1 = %i, c2 = %i\n", c1, c2); // 4 12
	return 0;
}
