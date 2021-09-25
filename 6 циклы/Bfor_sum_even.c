#include <stdio.h>

int main() {
    int n;
    int i;
    int x;
    int sum; 
    
    scanf("%d", &n); 
    
    sum = 0;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            sum = sum + x; 
        }
    }
    
    printf("%d\n", sum);
    return 0;
}