#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct human {
    char name[1000];
    char pat[1000];
    char surname[1000];
    char sex;
};
int main() {
    int n, i, kzhen = 0, kmuzh = 0;
    scanf ("%d", &n);
    struct human * h = calloc (n, sizeof (struct human));
   
    for (i = 0; i < n; i ++) {
        scanf ("%s%s%s", &(h[i].name), &(h[i].pat), &(h[i].surname));
        int m = strlen(h[i].pat);
        if (strcmp ("a", h[i].pat[m - 2]) == 0) {
            h[i].sex = 'ж';
            kzhen += 1;
        }
        else {
            h[i].sex = 'м';
            kmuzh += 1;
        }    
    }
    for (i = 0; i < n; i ++) {
        printf("%s %s %s %c\n", h[i].surname, h[i].name, h[i].pat, h[i].sex);
    }
    printf ("%d %d\n", kzhen, kmuzh);
    
    free (h);
    return 0;
}
