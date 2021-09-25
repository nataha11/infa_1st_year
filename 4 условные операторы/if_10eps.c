#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b; 
    float eps = 0.5; 

    scanf ("%f%f", &a, &b);
    
    if ( fabs(a-b) <= eps )
        printf ("YES\n");
    else
        printf ("NO\n");
        
    return 0;
}