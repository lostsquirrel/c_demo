#include <stdio.h>

int main(void) {
	int bjt;
	scanf("%d", &bjt);
	int bjh = bjt / 100;
	int bjm = bjt - bjh * 100;

	int utch = bjh - 8;
	if (utch < 0) {
		utch +=  24;
	}

	if (utch == 0) {
		printf("%d\n", bjm);
	} else {
		printf("%d%02d", utch, bjm);

	}

}