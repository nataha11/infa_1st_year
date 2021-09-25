#include <stdio.h>

int main()
{
	float x,y;
	scanf ("%f%f", &x, &y);
	if (y <= -1*x+3 && y<= x+3 && y>=-2){
        printf("YES\n");        
    }
    else{
        printf("NO\n");
    }

	return 0;
}