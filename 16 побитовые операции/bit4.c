#include <stdio.h>

#define LEN 2
#define MAX_VARS 4
#define NUM_PROPS 6

typedef struct {
	unsigned int r;   //смещение >>  
	unsigned int mask;   //маска (1 или 3(11) в этой задаче) 
	const char * name[MAX_VARS];   //варианты декодировки
} Feature;

void printFeature(const char * prop_name);
void getFeatures(int person, Feature * props);

int main() {

	Feature properties[] = {
		{0, 1, {"fe", "ma"}},
		{1, 1, {"du", "cl"}},
		{2, 1, {"nh", "ha"}},
		{3, 1, {"sk", "tr"}},
		{4, 3, {"bn", "rd", "bw", "bk"}},
		{6, 3, {"bu", "ge", "gy", "da"}},
	};

	int person;
	scanf("%x", &person);
	getFeatures(person, properties);
	return 0;
}

void printFeature(const char * prop_name) {
	int i = 0;
	while (prop_name[i] != '\0') {
		printf("%c", prop_name[i++]);
	}
	printf(" ");
}

void getFeatures(int person, Feature * props) {
	for (int i = 0; i < NUM_PROPS; i++) {
		int x = (person >> ((props+i)->r)) & ((props+i)->mask);
		printFeature((props+i)->name[x]);	
	}
	printf("\n");
}