/*
 * discuss_2.2.1.c
 *
 *  Created on: Mar 26, 2015
 *      Author: lisong
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int cnt = 0;

	while(cnt < 5) {
		void *p = NULL;
		p=malloc(cnt * 500 * 1024 * 1024);
		printf("malloc(%d* 500 * 1024 * 1024)->%p\n", cnt, p);
//		free(p);
		cnt++;
	}
	return 0;
}
