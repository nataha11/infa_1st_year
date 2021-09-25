#include <stdio.h>

int main()
{
    float x, y;
    scanf ("%f%f", &x, &y);
    if (x >= -3 && x <= 2 && y >= -4 && y <= 6) {
        printf("YES\n");        
    }
    else{
        printf("NO\n");
    }

    return 0;
}