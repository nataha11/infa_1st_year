#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 100

typedef struct {
    char a[N];   // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;       // наибольшая степень десяти
} Decimal;

int my_strlen(const char * s) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

Decimal set(const char * str) {
    Decimal d = {0};
    d.n = my_strlen(str) - 1;
    for(int i = 0; i <= d.n; i++) {
        d.a[i] = str[d.n - i] - '0';
    }
    return d;
}

int main() {
    Decimal res;
    res = set("12345678901234567890");    
    for (int i = 0; i < my_strlen("12345678901234567890"); i++) {
        printf("%d", res.a[i]);
    }
    printf("\n");
    printf("%d\n", res.n);
    
    return 0;
}


