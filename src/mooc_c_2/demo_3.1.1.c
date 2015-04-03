/*
 * demo_3.1.1.c
 *
 *  Created on: Apr 3, 2015
 *      Author: lisong
 */

#include <stdio.h>

int main(void) {

	enum COLOR {RED, YELLOW, BLUE, SIZE};

	enum COLOR a = RED;

	enum COLOR b = 1;

	printf("COLOR RED:%d\n", a);
	printf("COLOR YELLOW:%d\n", b);
	printf("COLOR SIZE:%d\n", SIZE);
	return 0;
}
