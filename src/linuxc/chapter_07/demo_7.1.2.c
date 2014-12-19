#include <stdio.h>

struct complex_struct { double x, y; };

void print_complex_struct(struct complex_struct z) {
	if (z.y < 0)
		printf("z=%f%fi\n", z.x, z.y);
	else
		printf("z=%f+%fi\n", z.x, z.y);
}

int main(void) {

	struct complex_struct z;
	double x = 3.0;
	z.x = x;
	z.y = 4.0;

	print_complex_struct(z);

	return 0;
}