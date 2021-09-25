#include <stdio.h>

void oneTr(float* x1, float* x2)
{
    
    float a1 = *x1 + (*x2 - *x1)/3;
    float a2 = *x2 - (*x2 - *x1)/3;
    *x1 = a1;
    *x2 = a2;
    
    printf ("%f %f", *x1, *x2);
};

int main()
{
    float x1, x2;
    scanf ("%f %f", &x1, &x2);
    oneTr(&x1, &x2);

    return 0;
}
