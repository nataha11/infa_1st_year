#include <stdio.h>

int main() {
    char a = '0';
    int d;
    
    scanf("%d", &d);
    
    int k = 0;
    
    while (a != '\n') {
        scanf("%c", &a);
        if (d == a - '0')
            k++;
    }
    
    printf("%d", k);
    return 0;
}