#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
    int dist2;
} Point;

Point * getPoints(int * n) {
    scanf("%d", n);
    Point *tmp = calloc(*n, sizeof(Point));
    for (int i = 0; i < *n; i++) {
        scanf("%d%d", &(tmp[i].x), &(tmp[i].y));
        tmp[i].dist2 = tmp[i].x * tmp[i].x + tmp[i].y * tmp[i].y;
    }
    return tmp;
}

int cmp_dist(const void* pa, const void * pb) {
    Point *a = (Point *) pa;
    Point *b = (Point *) pb;
    if(a->dist2 == b->dist2) {
        if(a->x == b->x)
            return a->y - b->y;
        return a->x - b->x;
    }
    return a->dist2 - b->dist2;
}

void prPoint(Point * a, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d %d\n", a[i].x, a[i].y);
    }
    printf("\n");
}

int main() {
    Point * a = 0;
    int n;
    a = getPoints(&n);
    qsort(a, n, sizeof(Point), cmp_dist);
    prPoint(a, n);
    free (a);
    return 0;
}