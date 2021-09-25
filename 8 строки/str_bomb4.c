#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000
#define SLOVO "bomb"

int main() {
    char s[N+1];
    int k = 0;
    while (scanf("%1000s", s) == 1) {
        if (strstr(s, SLOVO) != NULL) {
            k += 1;
        }
    }
    printf("%d\n", k);
    return 0;
}