#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char Data;

struct Stack {
	int n;
	Data * a;
};

const char * begin = "(<{[";
const char * end   = ")>}]";

struct Stack * stack_create() {
	struct Stack * s = malloc(sizeof(struct Stack));
	s->n = 0;
	s->a = malloc(1 * sizeof(Data));
	return s;
}

void stack_push(struct Stack * s, Data x) {
	s->a = realloc(s->a, (s->n + 1) * sizeof(Data));
	s->a[s->n] = x;
	s->n++;
}

int stack_is_empty(struct Stack * s) {
	return s->n == 0;
}

Data stack_pop(struct Stack * s) {
	if (stack_is_empty(s))
		return 'e';
	else {
		Data last = s->a[s->n - 1];
		s->n--;
		return last;
	}
}

int checkType(Data br1, Data br2) {
	//// лучше по входящей скобке искать индекс в begin, 
	//по нему находить закрывающую в end, если она совпала с нашей, то тип одинаковый
	switch(br1) {
		case '(':
			return br2 == ')';
		case '[':
			return br2 == ']';
		case '<':
			return br2 == '>';
		case '{':
			return br2 == '}';
		default:
			return 0;
	}
}

void stack_destroy(struct Stack * s) {
	free(s->a);
	free(s);
}

int main() {

	struct Stack * st = stack_create();

	Data br;
	int flag = 0;
	while(scanf("%c", &br) != 0 && br != '\n') {//считываем по одному символу
		if (strchr(begin, br) != NULL) {//если скобка открывающая
			stack_push(st, br);
		} else if (strchr(end, br) != NULL) {//если закрывающая
			if (checkType(stack_pop(st), br) == 0) {//проверяем тип
				printf("NO\n");
				flag = 1;
				break;//дальше проверять не нужно
			}
		}
	}
	if (stack_is_empty(st) == 1 && flag == 0)
		printf("YES\n");
	else if (stack_is_empty(st) == 0 && flag == 0)
		printf("NO\n");
	stack_destroy(st);
	return 0;
}