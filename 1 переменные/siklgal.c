#include <stdio.h>

#define GALEON 17   // 1 galeon = 17 sikl
#define SIKL 29     // 1 sikl = 29 knats

int money2knats(int g, int s, int k) 
{
    int res;
    res = ((g*GALEON) + s) * SIKL + k; 
    g = g + 100;
    return res;
}
void knats2money(int t0, int * pg, int * ps, int * pk) // pointer to
{
    int g0, s0, k0;    // разрушатся
    k0 = t0 % SIKL; // осталось кнатов
    s0 = t0 / SIKL; // сиклей большой кучей
    g0 = s0 / GALEON;
    s0 = s0 % GALEON;
    
    *pk = k0;
    *ps = s0;
    *pg = g0;
    
    // *pg = *pg + 100;        // g1 = g1 + 100;
    
    //return ;
}

int hack_bank1(int g) {
    return g+100;
}
void hack_bank2(int * p) {
    *p = *p + 100;
}
int main()
{
    int g1, s1, k1, t1; // кошелек = кошелек 1 - кошелек 2
    int g2, s2, k2, t2;
    int g, s, k, t;
    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);
    
    g1 = hack_bank1(g1);
    hack_bank2(&g2);
    
    t1 = money2knats(g1, s1, k1);
    t2 = money2knats(g2, s2, k2);
    
    t = t1 + t2;
    
    // g, s, k = knats2money(t); хочется, но нельзя
    knats2money(t, &g, &s, &k);
    
    printf("%d %d %d\n", g, s, k);
    printf("g1 = %d g2=%d\n", g1, g2);
    
    return 0;
}