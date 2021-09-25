#include <stdio.h>
#include <stdlib.h>

struct Rect0 {
    int x;        // верхняя левая вершина, х-координата
    int y;        // верхняя левая вершина, y-координата
    int width;    // ширина
    int height;   // высота
};
//////////
struct Point {
    int x;
    int y;
};

struct Rect1 {
    struct Point lt; // левая верхняя вершина
    struct Point rb; // правая нижняя вершина
};
/////////
int areaRect0 (struct Rect0 r)
{
	int s = r.width * r.height;
	return s ;
};
///////////
int areaRect1 (struct Rect1 h)
{
    int s = abs (h.rb.x - h.lt.x) * abs(h.lt.y - h.rb.y);
    return s;
};
int main()
{
	struct Rect0 m;
	int x1, y1, width1, height1;
	scanf ("%d%d%d%d", &x1, &y1, &width1, &height1);
	m.x = x1; m.y = y1; m.width = width1; m.height = height1;
	int s1 = areaRect0 (m);
	printf("%d\n", s1);
	
	
	struct Point p1;
	struct Point p2;
	int a1, b1, a2, b2;
	scanf ("%d%d%d%d", &a1, &b1, &a2, &b2);
	p1.x = a1; p1.y = b1; p2.x = a2; p2.y = b2;
	
	struct Rect1 h;
	h.lt = p1; h.rb = p2;
	int s2 = areaRect1 (h);
	printf ("%d", s2);
	return 0;
	
	
}