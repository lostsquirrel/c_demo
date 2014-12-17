#include <stdio.h>
#include <math.h>

struct complex_struct { double x, y; };

void print_complex_struct(struct complex_struct z) {
	if (z.y < 0)
		if (z.x != 0) {
			printf("z=%f%fi\n", z.x, z.y);
		} else {
			printf("z=%fi\n", z.y);
		}		
	else if (z.y == 0) {
		printf("z=%f\n", z.x);			
	} else {
		//z.y 大于 0
		if (z.x != 0) {
			printf("z=%f+%fi\n", z.x, z.y);
		} else {
			printf("z=%fi\n", z.y);
		}
	}
}

double real_part(struct complex_struct z) {
	return z.x;
}

double img_part(struct complex_struct z) {
	return z.y;
}

double magnitude(struct complex_struct z) {
	return sqrt(z.x * z.x + z.y * z.y);
}

double angle(struct complex_struct z) {
	//角度
	return atan2(z.y, z.x);
}

struct complex_struct make_from_real_img(double x, double y) {
	struct complex_struct z;
	z.x = x;
	z.y = y;
	return z;
}

struct complex_struct make_from_mag_ang(double r, double A) {
	struct complex_struct z;
	z.x = r * cos(A);
	z.y = r * sin(A);
	return z;
}

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2) {
	return make_from_real_img(real_part(z1) + real_part(z2), img_part(z1) + img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1, struct complex_struct z2) {
	return make_from_real_img(real_part(z1) - real_part(z2), img_part(z1) - img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1, struct complex_struct z2) {
	return make_from_mag_ang(magnitude(z1) * magnitude(z2), angle(z1) + angle(z2));
}

struct complex_struct div_complex(struct complex_struct z1, struct complex_struct z2) {
	return make_from_mag_ang(magnitude(z1) / magnitude(z2), angle(z1) - angle(z2));
}

int main(void) {


	//编译不过

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