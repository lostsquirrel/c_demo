#include <stdio.h>

/* copy input to output; 1st version */
void demo01051_1() {
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}

/* copy input to output; 2nd version */
void demo01051_2() {
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
/*

int main() {
	demo01051_2();
	return 0;
}
*/
