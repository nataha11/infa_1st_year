#include <stdio.h>


void toMiddle(int * x1, int * x2, int middle)
{
	float len = *x2-*x1;
	float a1, a2;
	a1 = middle - len/2 + 0.5;
	a2 = middle + (len - len/2) + 0.5;
	*x1 = (int)a1;
	*x2 = (int)a2;

}

