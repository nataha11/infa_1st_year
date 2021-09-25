#include <stdio.h>
#include <stdlib.h>
#define N 3

void sum1(int a[N][N], int *sumh[N], int *sumv[N]) {
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            sumh[y] += a[y][x];
            sumv[y] += a[x][y];
        }
    }
}
void sum2 (int a[N][N], int *sumd[2]) {
    for (int y = 0; y < N; y++) {
        sumd[0] += a[y][y];
        sumd[1] += a[y][N - y - 1];
    }
}
int main() {
    int a[N][N];
    
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++)
            scanf("%d", &a[y][x]);
        
    }
    int sumh[N] = {0, 0, 0}, sumv[N] = {0, 0, 0};
    sum1(a[N][N], *sumh[N], *sumv[N]);
    int sumd[2] = {0, 0};
    sum2 (a[N][N], sumd[2]);
    //отладочная печать
    for (int i = 0; i < N; i++) 
    	printf("%d ", sumh[i]);
    printf ("\n"); 
    
    for (int i = 0; i < N; i++)
        printf("%d ", sumv[i]);
    printf ("\n");
    
    for (int i = 0; i < 2; i++)
        printf("%d ", sumd[i]);
    printf ("\n");
    //конец отладочной печати    
    int flag = 1;
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++) {
            if (sumh[x] != sumv[y])
                flag = 0;
        }
    }
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < 2; y++) {
            if (sumh[x] != sumd[y])
                flag = 0;
        }
    }
    if (flag == 1)
        printf ("MAGIC");
    return 0;
}
