// 编写函数insertEntry，该函数插入一个新结点到链表之中。
#include <stdio.h>

struct entry{
	int value;
	struct entry *next; 
};

void insertEntry(struct entry *to, struct entry *from){
	// 将原来单元的指向赋给新来单元的指向
	from->next = to->next;
	// 将原来单元的指向改为指向新来的单元
	to->next = from;
}

int main(void){
	void insertEntry(struct entry *to, struct entry *from);
	
	struct entry n1, n2, n3, newEntry;
	struct entry *list_pointer = &n1; 
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = (struct entry *) 0; 
	
	newEntry.value = 9000;
	newEntry.next = 0;
	
	// insertEntry(&n1, &newEntry);
	insertEntry(&n2, &newEntry);
	// insertEntry(&n3, &newEntry);
	
	while(list_pointer != (struct entry *) 0){
		printf("%i\n", list_pointer->value);
		list_pointer = list_pointer->next;;
	}
	
	return 0;
}
