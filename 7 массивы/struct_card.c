#include <stdio.h>
#include <stdlib.h>

char * const suite = "cshd";
char * const rank = "23456789TJQKA";

struct Card {
    char rank;    // достоинство
    char suit;    // масть
};

int check(struct Card * hand) {
	for (int i = 0; hand[i].rank != 0; i++) {
		if (hand[i].rank == 'Q' && hand[i].suit == 's')
			return 1;
	}
	return 0;
}

int main()
{
	struct Card hand [] = {{'Q', 's'}, {'A','h'}, {'9', 'd'}, {0, 0}};
struct Card * p;
// напечатает QsAh9d
for (p=hand; p->rank != 0; p++) {
    printf("%c%c", p->rank, p->suit);
}
printf("\n");
// проверяем
printf("%d\n", check(hand));
	return 0;
}