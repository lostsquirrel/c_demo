#include <stdio.h>
#include <math.h>

enum coordinate_type { 
	RECTANGULAR, /*直角坐标图*/
	POLAR /*极坐标图*/ 
};

struct complex_struct { 
	enum coordinate_type t;
	double x, y; 
};

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

double rect_real_part(struct complex_struct z) {
	return z.x;
}

double rect_img_part(struct complex_struct z) {
	return z.y;
}

double rect_magnitude(struct complex_struct z) {
	return sqrt(z.x * z.x + z.y * z.y);
}

double rect_angle(struct complex_struct z) {
	//角度
	double PI = acos(-1.0);
	if (z.x > 0) {
		return atan(z.y / z.x);
	} else {
		return atan(z.y / z.x) + PI;
	}
	
}

struct complex_struct make_from_real_img(double x, double y) {
	struct complex_struct z;
	z.t = RECTANGULAR;
	z.x = x;
	z.y = y;
	return z;
}

struct complex_struct make_from_mag_ang(double r, double A) {
	struct complex_struct z;
	z.t = POLAR;
	z.x = r;
	z.y = A;
	return z;
}

double pol_real_part(struct complex_struct z) {
	return z.x * cos(z.y);
}
double pol_img_part(struct complex_struct z) {
	return z.x * sin(z.y);
}
double pol_magnitude(struct complex_struct z) {
	return z.x;
}
double pol_angle(struct complex_struct z) {
	return z.y;
}

double (*real_part_tbl[])(struct complex_struct) = { rect_real_part, pol_real_part };
double (*img_part_tbl[])(struct complex_struct) = { rect_img_part, pol_img_part };
double (*magnitude_tbl[])(struct complex_struct) = { rect_magnitude, pol_magnitude };
double (*angle_tbl[])(struct complex_struct) = { rect_angle, pol_angle };
// 一个指向函数指针的数组，返回值是double, 参数struct complex_struct

#define real_part(z) real_part_tbl[z.t](z)
#define img_part(z) img_part_tbl[z.t](z)
#define magnitude(z) magnitude_tbl[
#define angle(z) angle_tbl[z.t](z)




int main(void) {



	return 0;
}