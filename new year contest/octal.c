/*#include <stdio.h>
#include <stdlib.h>
#define N 8

void convert(int x) {
	int i = 0;
	int quot = 5;
	int *arr = malloc (1 * sizeof(int));
	for (i = 0; quot != 0; i++) {
		arr = realloc(arr, (i + 1) * sizeof(int));
		quot = x / N;
		arr[i] = x % N;
		x = quot;
	}
	FILE *outp = fopen("output.txt", "w");
	for (int j = i - 1; j >= 0; j--) {
		fprintf(outp,"%d", arr[j]);
	}
	free (arr);
	fclose(outp);
}

int main() {
	FILE *inp = fopen("input.txt", "r");

	int x;
	fscanf(inp, "%d", &x); 
	fclose(inp);

	convert(x);
	
	return 0;
}*/


#include <stdio.h>

int main()
{
	FILE *inp = fopen("input.txt", "r");

	long long int x;
	fscanf(inp, "%lld", &x); 
	fclose(inp);
	FILE *outp = fopen("output.txt", "w");
	fprintf(outp,"%llo", x);
	fclose(outp);
	
	return 0;
}
