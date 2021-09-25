#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

int main() {
    char s[N+1];   // нужно объявить переменную - место для читаемого токена 
    size_t dlina = 0;
    char dst[N];
    // пока успешно прочитан токен длиной не более 1000 символов
    while (scanf("%1000s", s) == 1) {
        if (strlen(s) > dlina) {
            strcpy (dst, s);
            dlina = strlen(s);
        }
    }
    printf ("%s %lu", dst, dlina);
    return 0;
}