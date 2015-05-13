/*
 * final_2.c
 *
 *  Created on: May 10, 2015
 *      Author: lisong
 */

#include <stdio.h>


int main(void) {
	int d;
	scanf("%d", &d);
	int x_min, x_max, y_min, y_max;

	int init = 0;
	while(d) {
		int x,y;
		scanf("%d", &x);
		scanf("%d", &y);
		if (init) {

			if (x < x_min) {
				x_min = x;
			}
			if (x > x_max) {
				x_max = x;
			}
			if (y < y_min) {
				y_min = y;
			}
			if (y > y_max) {
				y_max = y;
			}
		} else {
			x_min = x_max = x;
			y_min = y_max = y;
			init = 1;
		}
		d--;
	}

	printf("%d %d %d %d", x_min, y_min, x_max, y_max);
}
