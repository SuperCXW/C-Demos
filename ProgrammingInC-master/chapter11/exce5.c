// 实现一个双向链表
#include <stdio.h>

struct entry{
	struct entry *prev;
	int value;
	struct entry *next;
};

int main(void){
	struct entry n1, n2, n3, head;
	struct entry *list_pointer;
	
	head.prev = 0;
	head.value = -1;
	head.next = &n1;
	
	n1.prev = &head;
	n1.value = 100;
	n1.next = &n2;
	
	n2.prev = &n1;
	n2.value = 200;
	n2.next = &n3;
	
	n3.prev = &n2;
	n3.value = 300;
	n3.next = 0;
	
	list_pointer = & head;
	while(list_pointer->next != (struct entry *)0){
		printf("%i\n", list_pointer->next->value);
		list_pointer = list_pointer->next;
	}
		
	list_pointer = & n3;
	while(list_pointer->prev != (struct entry *)0){
		printf("%i\n", list_pointer->value);
		list_pointer = list_pointer->prev;
	}
		
	return 0;
}
