#include <stdio.h>
#include <stdlib.h>

void sort_ub (int *a, int n) {
    int i, j;
    for (i = 0 ; i < n - 1; i++) {
       for (j = 0 ; j < n - i - 1 ; j++) {  
           if (a[j] > a[j+1]) {
              int tmp = a[j];
              a[j] = a[j+1] ;
              a[j+1] = tmp; 
           }
        }
    }
}

func (int *a, int n) {
    int b[20000];
    int i;
    sort_ub (*a, n);
    for (i = 0; i < n; i++)
        b[i] = a[i] - a[i+1];
    sort_ub (*b, n);    
    
}


int main() {
    int n, i;
    scanf ("%d", &n);
    float a[20000];
    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }
    
    int b[20000];
    b = func (a);
    for (i = 0; i < n; i++) {
        printf("%f", b[i]);
    }
    return 0;
}