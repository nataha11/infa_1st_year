// #include <stdio.h>
// #include <stdlib.h>

int foo2 (int * px, int * py) {
    int res = *px + *py;
    *px += 1;
    *py -= 1;
    printf("foo2 : res=%d x=%d y=%d\n", res, *px, *py);
    return res;
}

// int main() {
//     int x, y;
//     scanf ("%d%d", &x, &y);
//     int sum = foo2(&x, &y);
//     return 0;
// } 