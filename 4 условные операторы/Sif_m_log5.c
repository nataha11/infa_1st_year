#include <stdio.h>

int main()
{   
    int z;
    scanf ("%d", &z);
    if (z < 10) {
        printf("0\n");
    }
    if (z >= 10 && z < 13) {
        printf("3\n");
    }
    if (z >= 13 && z <= 15) {
        printf("5\n");
    }
    if (z > 15) {
        printf("10\n");
    }
    
	return 0;
}