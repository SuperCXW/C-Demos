// 函数insertEntry修订版，可以在表头之前插入一个新元素。
#include <stdio.h>

struct entry{
	int value;
	struct entry *next; 
};

void insertEntry(struct entry *to, struct entry *from){
	from->next = to->next;
	to->next = from;
}

int main(void){
	void insertEntry(struct entry *to, struct entry *from);
	
	struct entry n1, n2, n3, head, newEntry;
	struct entry *list_pointer ;
	
	head.value = -1;
	head.next =  &n1;
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = (struct entry *) 0; 
	
	newEntry.value = 9000;
	newEntry.next = 0;
	
	insertEntry(&head, &newEntry);
	
	list_pointer = &head;
	// 略去表头的值
	while(list_pointer->next != (struct entry *) 0){
		printf("%i\n", list_pointer->next->value);
		list_pointer = list_pointer->next;;
	}
	
	return 0;
}
