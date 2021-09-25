#include <stdio.h>
#include <stdlib.h>
#ifdef AAA

typedef int Data;

struct Node {
	Data val;
	struct Node * next;
};

struct Node * list_create ();
struct Node * list_push (struct Node * list, Data x);
struct Node * list_pop (struct Node * list, Data * px);
struct Node * list_clear(struct Node * list);
Data list_get(struct Node * list);
void list_print (struct Node * list);
int list_size(struct Node * list);

//void list_clear(struct Node * list);

int main() {
	Data x;
	struct Node * list = list_create();
	list = list_push(list, 5);
	list_print(list);          // 5
	list = list_pop(list, &x);
	list_print(list);
	printf("x = %d\n", x);     // x = 5
	list = list_clear(list);

	return 0;
}
#endif

struct Node * list_create () {
	return NULL;
}

struct Node * list_push (struct Node * list, Data x) {
	struct Node * p = malloc(sizeof(struct Node));
	p->val = x;
	p->next = list;
	list = p;
	return p;
}

struct Node * list_pop (struct Node * list, Data * px) {
	struct Node * last = list;
	*px = list->val;
	list = last->next;
	free(last);
	return list;
}

Data list_get(struct Node * list) {
	return list->val;
}

void list_print(struct Node * list) {
	for (struct Node * p = list; p != NULL; p = p->next) {
		printf("%d ", p->val);
	}
	printf("\n");
}

int list_size(struct Node * list) {
	int n = 0;
	for (struct Node * p = list; p != NULL; p = p->next)
		n++;
	return n;
}

int list_is_empty(struct Node * list) {
	return list == NULL;
}

struct Node * list_clear(struct Node * list) {
	if (list == NULL) {
		free(list);
		return NULL;
	}
	list_clear(list->next);
	free(list);
	return NULL;
}

// void list_clear(struct Node * list) {
// 	if (list == NULL) {
// 		free(list);
// 		return;
// 	}
// 	list_clear(list->next);
// 	free(list);
// }


