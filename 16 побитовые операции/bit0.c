#include <stdio.h>

int xor(int a, int b) {
	return a ^ b;
}

int main() {
	int a, b;
	scanf("%x%x", &a, &b);
	printf("%x\n", xor(a, b));
	return 0;
}