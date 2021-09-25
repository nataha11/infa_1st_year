#include <stdio.h>
#include <math.h>

struct Rect * max(struct Rect * pa, struct Rect * pb) {
    int s1 = abs ((pa->rb.x - pa->lt.x) * (pa->rb.y - pa->lt.y));
    int s2 = abs ((pb->rb.x - pb->lt.x) * (pb->rb.y - pb->lt.y));
    return (s1 > s2) ? pa : pb;   
}

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt; // левая верхняя вершина
    struct Point rb; // правая нижняя вершина
};
int main () {
    struct Rect r1; 
    struct Rect r2;
    
    scanf ("%d %d %d %d %d %d %d %d", &r1.lt.x, &r1.lt.y, &r1.rb.x, &r1.rb.y, &r2.lt.x, &r2.lt.y, &r2.rb.x, &r2.rb.y);
    struct Rect r = *max(&r1, &r2);
    printf ("%d %d %d %d\n", r.lt.x, r.lt.y, r.rb.x, r.rb.y);
    return 0;
}