#include <stdio.h>
#include <math.h>

struct rational { int x, y; };

struct rational make_rational(int x, int y) {
	struct rational r = {x, y};
	return r;
}

int get_max_convention(int x, int y) {
	if (x % y == 0) {
		return y;
	} else {
		return get_max_convention(y, x % y);
	}
}

struct rational reduction(struct rational r) {
	struct rational c;
	int cm;
	cm = get_max_convention(r.x, r.y);
	c.x = r.x / cm;
	c.y = r.y / cm;
	return c;
}

struct rational add_rational(struct rational a, struct rational b) {
	struct rational c;
	if (a.y == b.y) {
		c.x = a.x + b.x;
		c.y = a.y;
	} else {
		c.x = a.x * b.y + b.x *a.y;
		c.y = a.y * b.y;
	}
	c = reduction(c);

	return c;
}

struct rational sub_rational(struct rational a, struct rational b) {
	struct rational c;
	if (a.y == b.y) {
		c.x = a.x - b.x;
		c.y = a.y;
	} else {
		c.x = a.x * b.y - b.x *a.y;
		c.y = a.y * b.y;
	}
	c = reduction(c);

	return c;
}

struct rational mul_rational(struct rational a, struct rational b) {
	struct rational c;
	
	c.x = a.x * b.x;
	c.y = a.y * b.y;
	
	c = reduction(c);

	return c;
}

struct rational div_rational(struct rational a, struct rational b) {
	struct rational c;
	
	c.x = a.x * b.y;
	c.y = a.y * b.x;
	
	c = reduction(c);

	return c;
}
void print_rational(struct rational r) {
	if (abs(r.x) == abs(r.y)) {
		printf("%d\n", r.x / r.y);
	} else if (r.x * r.y < 0) {
		printf("-%d/%d\n", abs(r.x), abs(r.y));
	} else if (r.x == 0) {
		printf("%d\n", r.x);
	} else {
		printf("%d/%d\n", r.x, r.y);
	}
}

int main(void) {
	struct rational a = make_rational(1, 8); /* a=1/8 */
	struct rational b = make_rational(-1, 8); /* b=-1/8 */
	print_rational(a);
	print_rational(b);
	print_rational(add_rational(a, b));
	print_rational(sub_rational(a, b));
	print_rational(mul_rational(a, b));
	print_rational(div_rational(a, b));
	return 0;
}