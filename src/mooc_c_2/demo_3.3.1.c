/*
 * demo_3.3.1.c
 *
 *  Created on: Apr 7, 2015
 *      Author: lisong
 *
 *      类型定义
 */

#include <stdio.h>

struct point {
	double x;
	double y;
};

typedef struct point Point;

typedef struct {
	Point p1;
	Point p2;
} Rectangle;
void print_point(const Point *p);

int main(void) {
	struct point p1 = {3,4};
	print_point(&p1);

	Point p2 = p1;
	print_point(&p2);

	Rectangle r;
	print_point(&r.p1);
	print_point(&r.p2);
	return 0;
}

void print_point(const Point *p) {
	printf("x=%f, y=%f\n", p->x, p->y);
}
