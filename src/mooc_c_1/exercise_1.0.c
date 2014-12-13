#include <stdio.h>

int main(void) {
	int a;
	int h;
	int d;
	int i;
	scanf("%d", &a);
	h = a / 100;
	a = a - h * 100;
	d = a / 10;
	a = a - d * 10;
	i = a;
	a = i * 100 + d * 10 + h;
	printf("%d\n", a);
}