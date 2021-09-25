#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	char * a = calloc( n * n , sizeof(char));
	for (int y = 0; y < n; y ++) {
        for (int x = 0; x < n; x++)
            scanf("%c ", a + y * n + x);
	}
	int k = 0;
	for (int y = 0; y < n; y ++) {
        for (int x = 0; x < n; x++)
            if (*(a + y * n + x) == '*')
                k += 1;
	}
	printf ("%d", k);
	free(a);
	return 0;
}
