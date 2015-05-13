/*
 * final_4.c
 *
 *  Created on: May 10, 2015
 *      Author: lisong
 */

#include <stdio.h>

int main(void) {

	long a;
	long a_1;
	long a_2;
	long b;
	long b_1;
	long b_2;

	scanf("%ld/%ld", &a_1, &a_2);
	scanf("%ld/%ld", &b_1, &b_2);

	if (&a_2 == 0 || b_2 == 0) {
		return -1;
	}
	a = a_1 * b_2;

	b = b_1 * a_2;
//	printf("a_1 * b_2=%ld, b_1 * a_2=%ld\n", a_1 * b_2, b_1 * a_2);
//	printf("a=%ld, b=%ld\n", a, b);
//	printf("a=%ld, b=%ld\n", a, b);
	char op = '=';
	if (a > b) {
		op = '>';
	} else if (a < b) {
		op = '<';
	}
	printf("%ld/%ld %c %ld/%ld\n", a_1, a_2, op, b_1, b_2);

}
