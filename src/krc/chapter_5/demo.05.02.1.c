/*
 * demo.05.02.1.c
 *
 *  Created on: 2014年10月8日
 *      Author: lisong
 */
#include <ctype.h>
#include <stdio.h>

const int SIZE = 200;
int getch(void);
void ungetch(int);
int getint(int *);

void demo05021_1() {
/*	int n;
	int res = 0;
	int array[SIZE];
	char xx[] = "Where this is a 10";
	int x;
	for (x = 0; x < 19; x++) {
		array[x] = xx[x];
//		printf("get Array[%d] = %d\n", x, xx[x]);

	}
	array[19] = -1;
	for (n = 0; n < SIZE && (res = getint(&array[n])) != EOF; n++) {
		printf("get Array[%d] = %d\n ", n, res);
	}*/
	int n, array[SIZE], getint(int *);
	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
		;
}

/* getint: get nex t integer from input into *pn */
int getint(int *pn) {
	int c, sign;
	while (isspace(c = getch()))
		/* skip white space */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* it is not a number */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c); c = getch()) {
		*pn = 10 * *pn + (c - '0');
	}
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}
