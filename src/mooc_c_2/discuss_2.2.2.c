/*
 * discuss_2.2.1.c
 *
 *  Created on: Mar 26, 2015
 *      Author: lisong
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	void *p = NULL;
	int cnt = 0;

	while((p=malloc(100*1204*1024))) {
		cnt++;
	}
	free(p);
	printf("获得内存%d00M\n", cnt);
	return 0;
}
