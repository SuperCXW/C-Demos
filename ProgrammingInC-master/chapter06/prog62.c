// 计算一组成绩的平均值，并统计不及格分数的个数
#include <stdio.h>

int main(void){
	int numberOfGrades, i, grade;
	int gradeTotal = 0;
	int failureCount = 0;
	float average;
	
	printf("How many grades will you be entering? ");
	scanf("%i", &numberOfGrades);
	
	for(i = 1; i <= numberOfGrades; ++i){
		printf("Enter grade #%i: ", i);
		scanf("%i", &grade);
		
		gradeTotal += grade;
		
		if(grade < 65){
			++failureCount;
		}
	}
	
	average = (float) gradeTotal / numberOfGrades;
	
	// %.2f输出精度修饰符，输出两位小数 
	printf("\nGrade average = %.2f\n", average);
	printf("Number of failures = %i\n", failureCount);
	
	return 0;
} 
