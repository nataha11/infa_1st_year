#include <stdio.h>

typedef struct
{
	int yy; // год
	char mm; // месяц
	char dd; // день
}Data;

typedef struct
{
	int yy; // год
	char season; // время года (зима - 0, весна - 1, лето - 2, осень - 3)
	int day; // день от начала текущего времени года
}Season;

Data getData(){
	Data dat;
	scanf ("%d-%hhu-%hhu", &dat.yy, &dat.mm, &dat.dd);
	return dat;
}

void printData(Data a){
	printf("%d-%02c-%02c\n", a.yy, a.mm, a.dd);
}


int main()
{
	Data dat;
    Season seas;
	dat = getData();
	printData(dat);
	//seas = convToSeas(dat);
	//printS(seas);

	return 0;
}