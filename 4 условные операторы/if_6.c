#include <stdio.h>

int fun (int x) {
    if ((x % 4 == 0 && x%100 != 0) || x % 400 == 0) {
        return 1;
    } else 
        return 0;    
}

int main()
{
    int x;
    scanf ("%d", &x);
    printf ("%s\n", fun (x) ? "YES" : "NO");

    return 0;
}