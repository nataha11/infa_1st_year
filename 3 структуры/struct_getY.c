#include <stdio.h>

struct Point {
int x;
int y;
};

int toY(struct Point a)
{
return a.y;
};

int main()
{
struct Point po;
scanf ("%d%d", &po.x, &po.y);
int ypr = toY(po);
printf ("%d", ypr);

return 0;
}