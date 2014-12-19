#include <stdio.h>
/*
结构体也是一种递归定义:结构体的成员具有某种数据类型,而结构体本身也是一种数据类型
*/
struct complex_struct { double x, y; } z;

struct segment {
	struct complex_struct start;
	struct complex_struct end;
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

void print_segment(struct segment s) {
	print_complex_struct(s.start);
	print_complex_struct(s.end);
}

int main(void) {

	struct segment s1 = {{ 1.0, 2.0 }, { 4.0, 6.0 }};

	print_segment(s1);
	
	struct segment s2 = { 1.0, 2.0, 4.0, 6.0 };
	print_segment(s2);

	struct segment s3 = {{ 1.0, 2.0 }, 4.0, 6.0 };
	print_segment(s3);

	struct segment s4 = { .start.x = 1.0, .end.x = 2.0 };
	print_segment(s4);

	struct segment s;
	s.start.x = 1.0;
	s.start.y = 2.0;
	print_segment(s);
	return 0;
}