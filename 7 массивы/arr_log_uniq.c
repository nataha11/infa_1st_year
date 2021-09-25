#include <stdio.h>
#include <stdlib.h>

struct Note {
	int timestamp;
	int id;
	int recept_id;	
};

int main() {
	int n;
	scanf("%d", &n);
	struct Note * z = (struct Note *) malloc (n * sizeof(struct Note));
	
	int * ids = (int *)malloc(n * sizeof(int));
	int quan = 0;	

	for (int i = 0; i < n; i++) {
		scanf ("%d%d%d", &(z + i)->timestamp, &(z + i)->id, &(z + i)->recept_id);

		if (i == 0) {
			ids[0] = (z + i)->id;
			quan++;
		}

		int flag = 1;
		for (int j = 0; j < quan; j++) {
			if (ids[j] == (z + i)->id) {
				flag = 0;
				break;
			}
		}

		if (flag == 1) {
			ids[quan++] = (z + i)->id;
		}
	}

	printf("%d", quan);
	free(ids);
	free(z);
	return 0;
}

