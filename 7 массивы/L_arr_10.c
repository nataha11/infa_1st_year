#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	long int *a;
	long int *b;
	scanf ("%d", &n);
	a = (long int *)calloc(n, sizeof(long int));
	for (int i = 1; i <= n; i++) {
		scanf ("%li", a + i);
	}
	b = (long int *)calloc(n, sizeof(long int));
	for (int i = 1; i <= n; i++) {
		scanf ("%li", b + i);
	}
	for (int i = 1; i <= n; i++) {
		printf ("%li ", a[i] + b[i]);
	}
	return 0;
}