#include <stdio.h>
#include <math.h>


float length(int x1, int y1, int x2, int y2)
{
    float c = sqrt ((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    return c;
};

float s3(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float c1 = length(x1, y1, x2, y2);
    float c2 = length(x2, y2, x3, y3);
    float c3 = length(x3, y3, x1, y1);
    float p = (c1 + c2 + c3)/2;
    float s = sqrt (p*(p-c1)*(p-c2)*(p-c3));
    return s;
};

int main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf ("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    
    
    
    float s =  s3( x1, y1, x2, y2, x3, y3);
    printf ("%0.1f", s);
     
    return 0;
}