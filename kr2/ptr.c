#include <stdio.h>
#define N 100
//// какой то граничный случай не обрабатывается
typedef struct {
    char a[N];   // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;       // наибольшая степень десяти
} Decimal;

Decimal zero = {{0}, 0};

void mult10n (Decimal * res, const Decimal * a, unsigned int k) {
    if (a == &zero) {
        res = &zero;
    }
    else {
        res->n = a->n + k;
        printf("%d\n", res->n);
        for (unsigned int i = 0; i < k; i++) {
            res->a[i] = 0;
            printf("%d ", res->a[i]);
        }
        for (unsigned int i = k; i < res->n + 1; i++) {
            res->a[i] = a->a[i - k];
            printf("%d ", res->a[i]);
        }
        printf("\n");
    }    
}
void div10n (Decimal * res, const Decimal * a, unsigned int k) {
    if (a == &zero || a->n <= k) {
        res = &zero;
    }
    else {
        res->n = a->n - k;
        printf("%d\n", res->n);            
        for (unsigned int i = k; i < a->n + 1; i++) {
            res->a[i - k] = a->a[i];
            printf("%d %u,[%u]\n ", res->a[i - k], i, i - k);
        }
        printf("\n");
    }    
} 
void print (Decimal * x) {
    for (unsigned int i = 0; i < x->n + 1; i++) {
        printf("%d ", x->a[i]);
    }
    printf("\n%d\n", x->n);
}
int main() {
    Decimal a = {{5, 8, 7, 4, 1}, 4};  // set number 147
    Decimal res;
    
    div10n(&res, &a, 0);        // res = a*100 = 147*100 = 14700
    
    print(&res);                 // print 14700
    
    
    return 0;
}


