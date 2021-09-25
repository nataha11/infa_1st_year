#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

int main()
{
    char z[N];
    int steps = 0;
    int x = 0, y = 0;
    while (1 == 1) {
        scanf("%9s", z);
        if (strcmp(z, "Treasure!") == 0)
            break;
        scanf("%d", &steps);
        if (strcmp(z, "East") == 0)
            x += steps;
        else if (strcmp(z, "West") == 0)
            x -= steps;
        else if (strcmp(z, "North") == 0)
            y += steps;
        else if (strcmp(z, "South") == 0)
            y -= steps;
    }

    printf("%d %d\n", x, y);

    return 0;
}
