#include <stdio.h>

int fact(int n)
{   
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

int main() {
    int n;   
    int res; 
   
    scanf("%d", &n);
   
    res = fact(n); 
   
    printf("%d\n", res);
    return 0;
}
