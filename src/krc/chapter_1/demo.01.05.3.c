#include <stdio.h>

/* count characters in input; 1st version */
void demo01053_1() {
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}
