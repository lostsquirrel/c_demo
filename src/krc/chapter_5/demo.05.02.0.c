#include <stdio.h>

void demo05020_1() {
	int x = 1;
	int y = 99;
	printf("x:%2d, y:%2d\n", x, y);
	swap_2(&x, &y);
	printf("x:%2d, y:%2d\n", x, y);
}

void swap_1(int x, int y) /* WRONG */
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void swap_2(int *px, int *py) /* interchange *px and *py */
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}
