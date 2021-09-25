#include <stdio.h>

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;
    struct Point rb;
};

void transform (struct Rect * dst, const struct Rect * src) {
    
    dst->(lt.x) = src->(lt.x);
    dst->(lt.y) = (-1) * src->(rb.y);
    dst->(rb.x) = src->(rb.x);
    dst->(rb.y) = (-1) * src->(lt.y);   
}

int main() {
    struct Rect rect, a = {{2, 4}, {7, 1}};
    transform(&rect, &a);
    printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
    printf("%d %d %d %d\n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
    return 0;
}