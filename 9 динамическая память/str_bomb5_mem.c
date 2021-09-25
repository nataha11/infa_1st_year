#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

char * replace (const char * src) {
    char * dst;
    char * find = 0;  // find - указатель на найденную подстроку
    char * copy = strdup(src);
    char * part = copy;  // part -  часть строки между подстроками "bomb"

    int lenS1 = strlen("bomb");
    int lenS2 = strlen("watermelon");
    int len = strlen (src) * lenS2;
    dst = (char *) calloc (len, sizeof (char));
    bzero (dst, len * sizeof (char));
    int i = 0;
    for (i = 0; (find = strstr(part, "bomb")) != 0; i++) {
        find[0] = '\0';
        strcat(dst, part);
        strcat(dst, "watermelon");
        part = find + lenS1;
    }
    strcat(dst, part); 
    free (find);
    
    if (i == 0) {
        free (dst);
        return copy;
    }
    free (copy);
    return dst;
}

// на main ругается, функция зашла
// int main()
// {
//     char s[N + 1];
//     char * d = 0;
//     //d[0] = '\0';

//     while (fgets(s, N, stdin) != NULL) {
//         d = replace(s);
//     }
    
//     printf("%s\n", d);
//     free (d);
//     return 0;
// }