#include <stdio.h>

long int nod (long int x, long int y) {
    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    return x;
}

long int nok (long int x, long int y) {
    return (x * y) / nod (x, y);
}

int main() {
    long int x, y;
    scanf ("%li%li", &x, &y);
    printf ("%li %li", nod (x, y), nok (x, y));
    return 0;
}