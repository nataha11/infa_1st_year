#include <stdio.h>
#include <stdlib.h>
#define N 2

void convert10ToN(int x) {
	int i = 0;
	int quot = 5;
	int *arr = malloc (1 * sizeof(int));
	for (i = 0; quot != 0; i++) {
		arr = realloc(arr, (i + 1) * sizeof(int));
		quot = x / N;
		arr[i] = x % N;
		x = quot;
	}
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", arr[j]);
	}
	free (arr);
}

int main() {
	int x;
	scanf("%o", &x);
	printf("%d\n", x);
/*	FILE *fil = fopen("output1.txt", "w");
	fprintf(fil, "%d", x);
	int numdec;
	fscanf(fil, "%d", &numdec);
	fclose(fil);
	convert10ToN(numdec);*/
	return 0;
}