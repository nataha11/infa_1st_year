#include <stdio.h>

int isMale(int a) {
	return (1 & a);
}

int main() {
	int a;
	scanf("%x", &a);
	printf(isMale(a)? "ma" : "fe");
	return 0;
}