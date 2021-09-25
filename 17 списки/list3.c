#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 1000000
#define MAX 9
#define MIN 0

typedef int Data;

struct Node {
	struct Node * next;
	struct Node * prev;
	Data data;
};

void list_init(struct Node * list);
struct Node * list_create();

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
	
	struct Node * first = list_create();
	struct Node * second = list_create();

	Data tmp;
	int i;

	//считывание данных
	for(i = 0; i < N; i++) {
		scanf("%1d", &tmp);
		list_push_front(first, tmp);
	}
	for(i = 0; i < N; i++) {
		scanf("%1d", &tmp);
		list_push_front(second, tmp);
	}

	//игра
	Data a;
	Data b;
	
	for (i = 0; i < M; i++) {
		a = list_pop_back(first);
		b = list_pop_back(second);

		if ((a > b && (a != MAX || b != MIN)) || (a == MIN && b == MAX)) {
			list_push_front(first, a);
			list_push_front(first, b);
		} else {
			list_push_front(second, a);
			list_push_front(second, b);
		}

		if (list_is_empty(first)) {
			printf("second %d\n", i + 1);
			break;
		}
		if (list_is_empty(second)) {
			printf("first %d\n", i + 1);
			break;
		}
	}

	if (i == M)
		printf("botva\n");

	list_destroy(first);
	list_destroy(second);

	return 0;
}


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