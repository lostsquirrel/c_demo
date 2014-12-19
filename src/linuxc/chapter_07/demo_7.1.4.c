#include <stdio.h>

struct complex_struct { double x, y; };

void print_complex_struct(struct complex_struct z) {
	if (z.y < 0)
		printf("z=%f%fi\n", z.x, z.y);
	else
		printf("z=%f+%fi\n", z.x, z.y);
}

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2) {
	z1.x = z1.x + z2.x;
	z1.y = z1.y + z2.y;
	return z1;
}

int main(void) {

	struct complex_struct z1 = { 3.0, 4.0 };
	struct complex_struct z2 = z1;
	z1 = z2;

	print_complex_struct(z1);
	print_complex_struct(z2);

	struct complex_struct z3;
	z3 = add_complex(z1, z2);
	print_complex_struct(z3);

	return 0;
}