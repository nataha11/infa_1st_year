#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

int main() {
    char s[N+1];  // нужно объявить переменную - место для читаемого токена 
    const char * slovo = "bomb";
    int flag = 0;
    // пока успешно прочитан токен длиной не более 1000 символов
    while (fgets(s, N, stdin) != NULL) {  // пока можем прочитать строку
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