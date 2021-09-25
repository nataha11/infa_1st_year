#include <stdio.h>

void printColor(int a) {
	switch(a >> 4 & 3) {
		case 0:
			{
				printf("bn\n");
				break;
			}
		case 1:
			{
				printf("rd\n");
				break;
			}
		case 2:
			{
				printf("bw\n");
				break;
			}
		case 3:
			{
				printf("bk\n");
				break;
			}
	}
}

int main() {
	int a;
	scanf("%x", &a);
	printColor(a);
	return 0;
}