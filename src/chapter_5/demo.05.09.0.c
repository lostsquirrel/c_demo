/*
 * demo.05.09.0.c
 *
 *  Created on: 2014年10月11日
 *      Author: lisong
 */
#include <stdio.h>

void demo05090_1() {
	int a[10][20];
	int *b[10];
	int i, j;
	for (i = 0; i < 10; i++) {
		int x[i+j];
		int index = 0;
		for (j = 0; i < 20; j++) {
			a[i][j] = i *  j;
			if ((i + j) % 8 == 0) {
//				x[index] = i * i + j * j;
				index++;
			}
		}
		b[i] = x;
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; i < 20; j++) {
			printf("a[%d][%d]=%d  \t", i, j, a[i][j]);
			printf("b[%d][%d]=%d \n", i, j, b[i][j]);
		}
	}

}
