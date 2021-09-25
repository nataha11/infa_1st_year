#include <stdio.h>
#include <stdlib.h>
#ifdef AAA

typedef int Data;
struct Node {
	struct Node * next;
	struct Node * prev;
	Data data;
};

void list_init(struct Node * list);

void list_insert(struct Node * list, struct Node * t);
void list_insert_before(struct Node * list, struct Node * t);
void list_remove(struct Node * t);

struct Node * list_push_front(struct Node * list, Data d);
struct Node * list_push_back(struct Node * list, Data d);

Data list_pop_front(struct Node * list);
Data list_pop_back(struct Node * list);
Data list_delete(struct Node * t);

void list_print (struct Node * list);
int list_is_empty(struct Node * list);

void list_clear(struct Node * list);
void list_destroy(struct Node * list);

int main() {
	struct Node x[10];
	struct Node * a = malloc(sizeof(struct Node));
	struct Node * b = malloc(sizeof(struct Node));

	list_init(a);
	list_init(b);
	// End of test 1

	for(int i = 0; i < 10; i++) {
		x[i].data = i;
		list_insert(a, &x[i]);
	}
	list_print(a);   // 9 8 7 6 5 4 3 2 1 0 
	// End of test 2

	list_remove(&x[5]);
	list_print(a);
	list_remove(&x[0]);
	list_print(a);
	list_remove(&x[9]);
	list_print(a);
	//End of test 3

	list_insert_before(a, &x[0]);
	list_print(a);
	list_insert(a, &x[9]);
	list_print(a);
	list_insert(&x[6], &x[5]);
	list_print(a);
	// End of test 4

	while(!list_is_empty(a))
		list_remove(a->next);
	// End of test 5
	int i;
	for(i = 0; i < 10; i++)
		list_push_back(a, i);
	list_print(a);
	// End of test 6

	for(i = 0; i < 10; i++)
		list_push_front(b, list_pop_back(a));
	list_print(b);
	// End of test 7

	for(i = 0; i < 10; i++) {
		list_push_front(a, i);
		list_pop_front(b);
	}
	list_print(a);
	// End of test 8

	for(i = 0; i < 10; i++)
		list_push_back(b, list_pop_front(a));
	list_print(b);
	// End of test 9

	list_clear(a);
	list_clear(b);
	// End of test 10

	list_destroy(a);
	list_destroy(b);
	return 0;
}
#endif

void list_init(struct Node * list) {
	list->next = list;
	list->prev = list;
}

void list_insert(struct Node * list, struct Node * t) {
	t->prev = list;
	t->next = list->next;
	struct Node * temp = list->next;
	list->next = t;
	temp->prev = t;
}

void list_insert_before(struct Node * list, struct Node * t) {
	list_insert(list->prev, t);
}

void list_print(struct Node * list) {
	for(struct Node * p = list->next; p != list; p = p->next) {
		printf("%d ", p->data);
	}
	printf("\n");
}

void print_back(struct Node * list) {
	for (struct Node * p = list->prev; p != list; p = p->prev) {
		printf("%d ", p->data);
	}
	printf("\n");
}

int list_is_empty(struct Node * list) {
	return list->next == list;
}

void list_remove(struct Node * t) {
	(t->prev)->next = t->next;
	(t->next)->prev = t->prev;
}

struct Node * list_push_front(struct Node * list, Data d) {
	struct Node * p = malloc(sizeof(struct Node));
	p->data = d;
	list_insert(list, p);
	return p;
}

struct Node * list_push_back(struct Node * list, Data d) {
	return list_push_front(list->prev, d);
}

Data list_delete(struct Node * t) {
	Data res = t->data;
	list_remove(t);
	free(t);
	return res;
}

Data list_pop_front(struct Node * list) {
	return list_delete(list->next);
}

Data list_pop_back(struct Node * list) {
	return list_delete(list->prev);
}

void list_clear(struct Node * list) {
	while(!list_is_empty(list))
		list_pop_front(list);
}

struct Node * list_create() {
	struct Node * z = malloc(sizeof(struct Node));
	list_init(z);
	return z;
}

void list_destroy(struct Node * list) {
	list_clear(list);
	free(list);
}

