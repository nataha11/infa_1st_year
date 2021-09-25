#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;
    struct Point rb;
};

struct Rect rotate(struct Rect a) {
    struct Rect p;
    p.lt.x = a.lt.x;
    p.lt.y = a.rb.y;
    p.rb.x = a.lt.x + (a.lt.y - a.rb.y);
    p.rb.y = (-1) * (a.rb.x - a.lt.x) + a.rb.y;
    return p;    
}

int main () {
    struct Rect r1;
    
    scanf ("%d %d %d %d", &r1.lt.x, &r1.lt.y, &r1.rb.x, &r1.rb.y);
    struct Rect r = rotate(r1);
    printf ("%d %d %d %d\n%d %d %d %d", r1.lt.x, r1.lt.y, r1.rb.x, r1.rb.y, r.lt.x, r.lt.y, r.rb.x, r.rb.y);
    return 0;
}