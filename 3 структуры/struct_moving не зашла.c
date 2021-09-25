#include <stdio.h>

typedef struct
{
    float m; // масса точки
	float coord; // начальная координата точки
	float v0; // начальная скорость точки
	float a;  // ускорение точки
}MassPoint;

MassPoint getParam(){
	MassPoint mp;
	scanf ("%f%f%f%f", &mp.m, &mp.coord, &mp.v0, &mp.a);
	return mp;
}

float move(MassPoint * m, int time){
    float x = m->coord + (m->v0)*time + ((m->a)*time*time)/2;
    return x;
}

float pointByPoint(MassPoint *m1, MassPoint *m2, int time){
	float x1 = m1->coord + (m1->v0)*time + ((m1->a)*time*time)/2;
	float x2 = m2->coord + (m2->v0)*time + ((m2->a)*time*time)/2;
	m1->coord = x1; m2->coord = x2;
	return x2 - x1;
}

void printM(MassPoint a){
	printf("%0.2f,%0.2f,%0.2f,%0.2f\n", a.m, a.coord, a.v0, a.a);
}

int main()
{
	MassPoint k = getParam();
	printf("%f %f %f %f\n", k.m, k.coord, k.v0, k.a);
	
	MassPoint h;
	int time;
	scanf("%f%f%f%f%d",  &h.m, &h.coord, &h.v0, &h.a, &time);
	float newcoo = move(&h, time);
	printf("%f\n", newcoo);

	MassPoint m1, m2;
	int time;
	scanf("%f%f%f%f", &m1.m, &m1.coord, &m1.v0, &m1.a);
	scanf("%f%f%f%f%d", &m2.m, &m2.coord, &m2.v0, &m2.a, &time);
	float relcoo = pointByPoint(&m1, &m2, time);
	printf("%f\n", relcoo);

	MassPoint h;
	scanf("%f%f%f%f", &h.m &h.coord, &h.v0, &h.a);
	printM(h);
	return 0;
}