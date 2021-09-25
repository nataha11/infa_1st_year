#include <stdio.h>

int wearHat(int a) {
	return (1 & a>>2);
}

int main() {
	int a;
	scanf("%x", &a);
	printf(wearHat(a)? "ha" : "nh");
	return 0;
}