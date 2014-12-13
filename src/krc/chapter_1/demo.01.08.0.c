#include <stdio.h>

int power2(int m, int n);
/* test power function */
void demo01080_1() {
	int i;
	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power2(2, i), power2(-3, i));

}

/* power: raise base to n-th power; n >= 0; version 2 */
int power2(int base, int n) {
	int p;
	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}
