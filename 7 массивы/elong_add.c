#include <stdio.h>

#define N 100

typedef struct {
    char a[N];   // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;       // наибольшая степень десяти
} Decimal;

unsigned int max (unsigned int a, unsigned int b) {
    return (a > b) ? a : b;
}

Decimal add (Decimal a, Decimal b) {
    Decimal dest = {0};
    unsigned int m = max (a.n, b.n);

    for (unsigned int i = 0; i < m + 1; i++) {
        if (i <= a.n) {
            dest.a[i] += a.a[i];
        }
        if (i <= b.n) {
            dest.a[i] += b.a[i];
        }
        dest.a[i + 1] = dest.a[i] / 10;
        dest.a[i] %= 10;
        
        dest.n = i;
    }
    
    if (dest.a[m + 1] != 0) {
        dest.n = m + 1;
    }
    return dest;
}

int main() {
    Decimal a = {{6, 4, 1}, 2};  // set number 146
    Decimal b = {{1, 3, 1}, 2};     // set number  131
    Decimal res;
    
    res = add(a, b);           // res = a+b = 146+131 = 277
    for (int i = res.n; i >= 0; i--) {
        printf ("%d", res.a[i]);            //277
    }
    printf("\n");
    printf("%d\n", res.n);                    //2
    
    return 0;
}


