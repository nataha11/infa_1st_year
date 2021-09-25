#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int * a = malloc (1 * sizeof(int));
	while (1 == 1) {
		if (scanf ("%d", &a[i]) != 1)
			break;
		i++;
		a = realloc (a, (i + 1) * sizeof (int));
	}
	int n = i;

	for (i = n - 1; i >= 0; i--)
		printf("%d ", a[i]);
	
	free (a);
	return 0;
}