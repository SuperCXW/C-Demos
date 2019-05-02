// 传入参数，随意升序降序 
// 修改exce13的全局变量 
#include <stdio.h>

int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
		44, -3, -9, 12, 17, 22, 6, 11};

void sort(int a[], int n, int isUpper){
	int i, j, temp;
	
	if(isUpper){
		for(i = 0; i < n - 1; ++i)
			for(j = i + 1; j < n; ++j)
				if(a[i] > a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}	
	}
	else{
		for(i = 0; i < n - 1; ++i)
			for(j = i + 1; j < n; ++j)
				if(a[i] < a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
		
} 

int main(void){
	int i;
	
	void sort(int a[], int n, int isUpper);
	
	printf("The array before the sort:\n");
	
	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);
		
	sort(array, 16, 0);
		
	printf("\n\nThe array after the sort:\n");
	
	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);
	
	printf("\n");
	
	return 0;
}
