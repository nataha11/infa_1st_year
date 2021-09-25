#include <stdio.h>

typedef struct
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
}Color;

Color getColor(){
	Color a;
	scanf ("%c %c %c", &a.red, &a.green, &a,blue);
	return a;
}

unsigned long long convertToHTML(Color a){
	printf("%x%x%x\n", a.red, a.green, a,blue);
}

void printRGB(Color a) {
	printf("%c %c %c\n", a.red, a.green, a,blue);
}

void printHTML(Color){

}

int main(){
	Color z, z2;
	unsigned long long html;
	z = getColor();
	printRGB(z);
	html = convertToHTML(z);
	printf("%llu\n", html);
	printHTML(z);
	z2 = convertToRGB(html);
	printRGB(z2);
   return 0;
}