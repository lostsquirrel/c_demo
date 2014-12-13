/*
 * demo.05.08.0.c
 *
 *  Created on: 2014年10月11日
 *      Author: lisong
 */
#include<stdio.h>
/* month_name: return name of n-th month */
char *month_name(int n) {
	static char *name[] = { "Illegal month", "January", "February", "March",
			"April", "May", "June", "July", "August", "September", "October",
			"November", "December" };
	return (n < 1 || n > 12) ? name[0] : name[n];
}

void demo05080_1() {
	int i;
	for (i = -3; i < 18; i++) {
		printf("%s\n",month_name(i));
	}
}
