#include <stdio.h>
#include <math.h>

int max (int a, int b) {
    return (a > b) ? a : b;
}

int min (int a, int b) {
    return (a < b) ? a : b;
}

void normalize(struct Rect * p) {
        int a = p->lt.x; 
        int b = p->lt.y; 
        int c = p->rb.x; 
        int d = p->rb.y;
        p->lt.x = min (a, c);
        p->lt.y = max (b, d);
        p->rb.x = max (a, c);
        p->rb.y = min (b, d);
}

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt; // левая верхняя вершина
    struct Point rb; // правая нижняя вершина
};
int main()
{
	struct Rect a;
	scanf("%d", &(a.lt.x));
	scanf("%d", &(a.lt.y));
	scanf("%d", &(a.rb.x));
	scanf("%d", &(a.rb.y));

    normalize(&a);
    printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
	
	return 0;
}