#include <stdio.h>

void printLocalTime(int hMos, int h, int hplane)
{
	int Ntime = (hMos + hplane - h)%24;
	int Ndate = 5 + (hMos + hplane - h)/24;
	printf("%d %d\n", Ntime, Ndate);
}

int main()
{
	int hMos, h, hplane;
	scanf ("%d%d%d", &hMos, &h, &hplane);
	printLocalTime(hMos, h, hplane);
	return 0;
}