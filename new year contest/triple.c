#include <stdio.h>
#include <math.h>
#define N 3

long long int convert3To10(long long int x) {
	long long int y = 0;
	for (int i = 0; x != 0; i++) {
		y += (x % 10) * pow(N, i);
		x /= 10;
	}
	return y;
}

int main() {
	long long int x;
	scanf("%lld", &x);
	printf("%lld\n", convert3To10(x));
	return 0;
}