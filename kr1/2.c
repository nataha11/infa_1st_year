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
struct Rect transform(struct Rect a) {
    struct Rect p;
    p.lt.x = a.rb.x;
    p.lt.y = a.lt.y;
    p.rb.x = a.rb.x + (a.lt.y - a.rb.y);
    p.rb.y = a.lt.y - (a.rb.x - a.lt.x);
    return p;    
}

int main()
{
    struct Rect a;
    scanf ("%d %d %d %d", &a.lt.x, &a.lt.y, &a.rb.x, &a.rb.y);
    struct Rect rect = transform(a);
    printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
    printf("%d %d %d %d\n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
    return 0;
}