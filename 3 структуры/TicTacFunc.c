#include <stdio.h>

typedef struct{ 
	int h;
	int min;
}TicTac;

TicTac after(TicTac a, int min)
{
	TicTac b;
	b.h = ((a.h*60 + a.min + min)/60)%12;
	b.min = (a.h*60 + a.min + min)%60;
	return b;
};

void forward(TicTac * me, TicTac a)
{
	int h1 = (((me->h + a.h)*60 + me->min + a.min)/60)%12;
	int min1 = ((me->h + a.h)*60 + me->min + a.min)%60;
	me->h = h1;
	me->min = min1;
}

void backward(TicTac * me, TicTac a)
{
	int h2 = (12 + (me->h - a.h + 12)%12 - (59 - me->min + a.min)/60)%12;
	int min2 = (60 + me->min - a.min)%60;
	me->h = h2;
	me->min = min2;
}

int isEqualTime(TicTac a, TicTac b)
{
	int s = !(a.h*60 +a.min - b.h*60 - b.min);
	return s;
}

void printTic(TicTac a)
{
	printf("%02d:%02d\n",a.h, a.min);
}

//////////////////////
int main()
{
	TicTac t;
	int min;
	scanf ("%d%d%d", &t.h, &t.min, &min);
	TicTac t1 = after (t, min);
	printf("%d %d\n", t1.h, t1.min);

	TicTac me, a;
	scanf("%d %d %d %d", &me.h, &me.min, &a.h, &a.min);
	forward( &me, a);
	printf("%d %d\n", me.h, me.min);

	TicTac me, a;
	scanf("%d %d %d %d", &me.h, &me.min, &a.h, &a.min);
	backward (&me, a);
	printf("%d %d\n", me.h, me.min);

	TicTac a, b;
	scanf("%d %d %d %d", &a.h, &a.min, &b.h, &b.min);
	printf("%d", isEqualTime(a, b));

	TicTac a;
	scanf("%d%d", &a.h, &a.min);
	printTic(a);

	return 0;
}