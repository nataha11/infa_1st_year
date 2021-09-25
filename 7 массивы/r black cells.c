#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int k = 0;
	scanf ("%d", &n);
	char * a = calloc (n * n, sizeof(char));
	for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            scanf ("%c ", a + y * n + x);
            if (a[y * n + x] == '*')
                k++;
        }        
	}
	
	printf ("%d", k);
	free (a);
	return 0;
}