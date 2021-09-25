#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1000

int cmp_float_abs(const void * p1, const void * p2) {
    float x = *(float*)p1;
    float y = *(float*)p2;
    if (fabs (x) < fabs (y)) 
        return -1;
    else if (fabs (x) > fabs (y))
        return 1;
    if (x < y)
        return -1;
    else if (x > y)
        return 1;
    return 0;
}

int main() {
    float a[N + 1];
    int i = 0;
    while (1) {
        if ((scanf ("%f", &(a[i])) != 1))
            break;
        i++;
    }
    int n = i;
    
    qsort (a, n, sizeof (float), cmp_float_abs);
    for (int i = 0; i < n; i++) {
        printf ("%.3f ", a[i]);
    }
    return 0;
}