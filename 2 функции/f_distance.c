#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float getDistance(int x1, int y1, int x2, int y2) 
{
 float r = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
 return r;
}

int main()
{
    int x1, x2, y1, y2;
    scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);
    float x = getDistance( x1, y1, x2, y2);
    printf ("%0.2f", x);

    return 0;
}
