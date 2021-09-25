#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 1000

char * stringtolower(char * s) {
    *s = tolower(*s);
    return s;
}

int main() {
    char s[N+1];
    const char * slovo = "bomb";
    int flag = 0;
    
    while (NULL != fgets(s, N, stdin)) {
        for (size_t i = 0; i < strlen (s); i++) 
            s[i] = *(stringtolower (s + i));
        if (strstr (s, slovo) != NULL) {
            flag = 1;
        }
    }
    if (flag == 1) 
        printf("YES");
    else 
        printf("NO");
    return 0;
}