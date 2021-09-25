#include <stdio.h>
#include <stdlib.h>
#ifdef AAA
typedef int Data;
struct Node {
	Data val;
	struct Node * next;
};
typedef struct Node * List;

List list_create (); 
void list_push (List * plist, Data x); 
Data list_pop (List * plist); 	
Data list_get(List list); 
void list_print (List list); 
int list_size(List list); 
void list_clear(List * plist);
int list_is_empty(List list);

int main()
{
	List list = list_create();
	list_push(&list, 5);
	list_print(list);
	list_clear(&list);
	return 0;
}
#endif

List list_create () {
	return NULL;
}

void list_push (List * plist, Data x) {
	List p = malloc(sizeof(struct Node));
	p->val = x;
	p->next = *plist;
	*plist = p;
}

Data list_pop (List * plist) {
	List p = *plist;
	Data res = p->val;
	*plist = p->next;
	free(p);
	return res;
}

Data list_get(List list) {
	return list->val;
}

void list_print(List list) {
	if (list == NULL) {
		printf("Empty list\n");// в тестах тут Empty stack
		return;
	}
	for (List p = list; p != NULL; p = p->next) {
		printf("%d ", p->val);
	}
	printf("\n");
}

int list_size(List list) {
	int n = 0;
	for (List p = list; p != NULL; p = p->next)
		n++;
	return n;
}

void list_clear(List * plist) {
	if (*plist == NULL) {
		free(*plist);
		return;
	}
	list_clear(&((*plist)->next));
	free(*plist);
}

int list_is_empty(List list) {
	return list == NULL;
}
