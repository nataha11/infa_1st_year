#include <stdio.h>

void mirror(int * x1, int * y1)
{
    *x1 *= (-1);
    
    printf ("%d %d", *x1, *y1);
};

int main()
{
    int x, y;
    scanf ("%d %d", &x, &y);
    mirror(&x, &y);

    return 0;
}
