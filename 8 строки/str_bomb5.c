#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S1 "bomb"
#define S2 "watermelon"
#define N 1000
#define K 2500

void replace (char * dst, const char * src) {
    char *find = 0;  // find - указатель на найденную подстроку
    char * copy = strdup(src);
    char *part = copy;  // part -  часть строки между подстроками S1

    int lenS1 = strlen(S1); // длина строки bomb
    for(int i = 0; (find = strstr(part, S1)) != 0; i++) {
        find[0] = '\0';
        strcat(dst, part);
        strcat(dst, S2);
        part = find + lenS1;  // вычисляем начало нового part
    }
    strcat(dst, part);  // приклеиваем последнюю part
    free (copy);
    free (find);
}

int main()
{
    char s[N + 1];
    char d[K];
    d[0] = '\0';

    while (fgets(s, N, stdin) != NULL) {
        replace(d, s);
    }

    printf("%s\n", d);

}