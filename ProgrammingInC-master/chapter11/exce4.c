// 编写removeEntry以从链表中删除一个元素。
// 它唯一的参数时一个指向链表元素的指针。
#include <stdio.h>

struct entry{
	int value;
	struct entry *next;
};

void removeEntry(struct entry *source){
	if(source->next == (struct entry *)0)
		return;
	source->next = source ->next->next;
};

int main(void){
	void insertEntry(struct entry *to, struct entry *from);
	
	struct entry n1, n2, n3, head;
	struct entry *list_pointer ;
	
	head.value = -1;
	head.next =  &n1;
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = (struct entry *) 0; 
	
	removeEntry(&head);
	
	list_pointer = &head;
	while(list_pointer->next != (struct entry *) 0){
		printf("%i\n", list_pointer->next->value);
		list_pointer = list_pointer->next;;
	}
	
	return 0;
}
