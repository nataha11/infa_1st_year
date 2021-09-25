#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * make_alphabet(char * dst, const char * codeword) {
	for (int i = 0; i < strlen("abcdefghijklmnopqrstuvwxyz"); i++) {
		
	}
	char * tmp = strdup(codeword);


	return dst;
}

int main() {

	char a[27];
	printf("%s", make_alphabet(a, "worodr")); // wordabcefghijklmnpqstuvxyz
 
	return 0;
}