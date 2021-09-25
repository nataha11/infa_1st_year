#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};
struct Line {
    struct Point a; // начало отрезка
    struct Point b; // конец отрезка
    float len;      // длина отрезка
};
float distance(struct Point a, struct Point b)
{
    float d = sqrt ((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
    return d;
};

void scanLine(struct Line * t)
{
    scanf ("%d%d%d%d",&t->a.x, &t->a.y, &t->b.x, &t->b.y);
    t->len = distance(t->a, t->b);
};

void printLine(struct Line t)
{
    printf("%d %d %d %d %0.2f\n", t.a.x, t.a.y, t.b.x, t.b.y, t.len);
};
void rotRLine(struct Line * t){
	int x1 = t->a.y;
	int x2 = t->b.y;
	int y1 = -1*t->a.x;
	int y2 = -1*t->b.x;
	t->a.x = x1;
	t->a.y = y1;
	t->b.x = x2;
	t->b.y = y2;
}

int main() {
    struct Line t;
    
    scanLine(&t);
    rotRLine(&t);
    printLine(t);
    
    return 0;
}