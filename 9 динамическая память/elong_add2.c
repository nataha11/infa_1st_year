#include <stdio.h>

#define N 100

typedef struct {
    char * a;   // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;       // наибольшая степень десяти
} Decimal;

unsigned int max (unsigned int a, unsigned int b) {
    return (a > b) ? a : b;
}

void add (const Decimal * a, const Decimal * b, Decimal * res) {
    unsigned int m = max (a->n, b->n);

    for (unsigned int i = 0; i < m + 1; i++) {
        if (i <= a->n) {
            res->a[i] += a->a[i];
        }
        if (i <= b->n) {
            res->a[i] += b->a[i];
        }
        res->a[i + 1] = res->a[i] / 10;
        res->a[i] %= 10;
        
        res->n = i;
    }
    
    if (res->a[m + 1] != 0) {
        res->n = m + 1;
    }
    
}

int main() {
    
    Decimal a; //= {{6, 4, 1}, 2};  // set number 146
    Decimal b; //= {{3, 1}, 1};     // set number  13    
    Decimal res = {0};
    char tmp;
    while (scanf ("%c", tmp) == 1)
        a.a[i] =

    
    add(&a1, &b2, &res);
    for (int i = res.n; i >= 0; i--) {
        printf ("%d", res.a[i]);            //159
    }
    printf("\n");
    printf("%d\n", res.n);                    //2
    
    return 0;
}

//то что артем написал

// void add_decimal() {
//     int carry_bit = 0;
//     if(!res.size)
//         res.size = 0;
//     if (res.size < a.size+1 || res.size < b.size+1) {
//         if (res.a)
//         free(res.a);
//         res.a = malloc((a.size > b.size ? a.size : b.size) + 1);
//     }
//     res.n = 0;
//     for(int i = 0; i < (a.n > b.n ? a.n : b.n); i++) {
//         char x = i < a.n ? a.a[i]:'0';
//         char y = i < b.n ? b.a[i]:'0';
//         int sum = carry_bit + x + y - 2*'0';
//         res.a[i] = '0' + (sum % 10);
//         carry_bit = sum / 10;
//         res.n++;
//     }
//     if (carry_bit) {
//         res.a[res.n] = '1';
//         res.n++;
//     }
// } 