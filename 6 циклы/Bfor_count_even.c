#include <stdio.h>

int main() {
    int n;
    int i;
    int x;
    int k; 
    
    scanf("%d", &n); 
    
    k = 0;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            k = k + 1; 
        }
    }
    
    printf("%d\n", k);
    return 0;
}