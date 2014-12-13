#include <stdio.h>

float power_x(int m, int n);
int power(int m, int n);
/* test power function */
void demo01070_1() {
	int i;
	for (i = 0; i < 10; ++i)
	printf("%d %d %d\n", i, power(2,i), power(-3,i));

}

void demo01070_2() {
	int i;
	for (i = 0; i < 10; ++i)
		printf("%d %.6d %.6d\n", i, power(2, i), power(-3, i));

}
/* power: raise base to n-th power;i */
float power_x(int base, int n) {
	int i;
	float p;
	int _n;

	if (n > 0) {
		_n = n;
	} else {
		_n = -n;
	}

	p = 1;
	for (i = 1; i <= _n; ++i)
		p = p * base;

	if (n > 0) {
		return p;
	} else {
		return 1.0 / p;
	}
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}
