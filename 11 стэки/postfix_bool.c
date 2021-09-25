#include <stdio.h>
#include <stdlib.h>
typedef int Data;

struct Stack {
	int n;
	Data * a;
};

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
		return 0;
	else {
		Data last = s->a[s->n - 1];
		s->n--;
		return last;
	}
}

void stack_destroy(struct Stack * s) {
	free(s->a);
	free(s);
}

int calculateLog(struct Stack * st, char op) {
	switch(op) {
		case '|':
			{
				int a = stack_pop(st);
				int b = stack_pop(st);
				return a || b;
			}
		case '&':
			{
				int a = stack_pop(st);
				int b = stack_pop(st);
				return a && b;
			}
		case '!':
			return !stack_pop(st);
		default:
			return 6;
	}
}

int main() {
	struct Stack * st = stack_create();
	char temp;
	int result;
	int flag = 0;
	while(scanf("%c", &temp) != 0 && temp != '=') {
		if (temp == '1' || temp == '0')
			stack_push(st, temp - '0');
		else if (temp == '|' || temp == '&' || temp == '!') {
			result = calculateLog(st, temp);
			stack_push(st, result);
		} else {
			printf("Error\n");
			flag = 1;
		}
	}

	if (flag == 0)
		printf("%d\n", stack_pop(st));

	stack_destroy(st);
	return 0;
}


