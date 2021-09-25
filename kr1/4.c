#include <stdio.h>

char suite[] = "cshd";
char rank[] = "23456789TJQKA";

struct Card {
    char rank;    // достоинство
    char suit;    // масть
};

int check(struct Card hand[]) {
	int k = 0;
	int k0 = 0;
	int g[13];
	int i, j, v, h = 0;
	for (i = 0; hand[i].rank != 0; i++) {
		if (i != 0) {
    		for (v = 0; v < i; v++) {
    			if (hand[v].rank != hand[i].rank) {
    				for (j = i + 1; hand[j].rank != 0; j++) {
    					if (hand[i].rank == hand[j].rank)  
    					    k += 1;
    					g[i] = k;
    					k = 0;
    					
    				}	
    			}
    		}
		} else {
		    for (j = i + 1; hand[j].rank != 0; j++) {
    			if (hand[i].rank == hand[j].rank) { 
    			    k0 += 1;
    			    g[0] = k0;
    			}
		    }		
		}	
	}
	for (i = 0; i < 13; i++) {
	    if (g[i] >= 2)
	        h += 1;
	}
	if (h == 2)
	    return 1;
	return 0;    
	
}

int main() {
	struct Card hand[] = {{'Q', 's'}, {'A','h'}, {'9', 'd'}, {0, 0}};
	int i;

    printf("%d\n", check(hand));
    return 0;
}
