/*
 * demo_3.3.2.c
 *
 *  Created on: Apr 7, 2015
 *      Author: lisong
 *      union
 */

#include <stdio.h>

typedef union {
	int i;
	char ch[sizeof(int)];
} CHI;

int main(void) {
	CHI c;
	c.i = 1234;
	int i;
	for (i = 0; i < sizeof(int); i++) {
		printf("%02hhx\n", c.ch[i]);
	}
	printf("%x\n", c.i);

	return 0;
}
