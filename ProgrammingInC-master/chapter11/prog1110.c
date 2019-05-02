// 从函数返回一个指针
#include <stdio.h>

struct entry{
	int value;
	struct entry *next;
};

// 查找一个链表以找出给定的值，返回值是一个指向结构entry的指针
struct entry *findEntry(struct entry *listPtr, int match){
	while(listPtr != (struct entry *) 0){
		if(listPtr->value == match)
			return (listPtr);
		else
			listPtr = listPtr->next;
	}
	return (struct entry *) 0;
}

int main(void){
	struct entry *findEntry(struct entry *listPtr, int match);
	struct entry n1, n2, n3;
	struct entry *listPtr, *listStart = &n1;
	int search;
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = 0;
	
	printf("Enter value to locate: ");
	scanf("%i", &search);
	
	listPtr = findEntry(listStart, search);
	
	if(listPtr != (struct entry *) 0)
		printf("Found %i.\n", listPtr->value);
	else
		printf("Not found.\n");
		
	return 0;
}
