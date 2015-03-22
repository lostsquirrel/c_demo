/*
 * discuss7.3.0.c
 *
 *  Created on: Mar 22, 2015
 *      Author: lisong
 */
#include <stdio.h>

int main(void) {
	char a[3] = {0};
	char b[3] = {0};
	printf("a = %s##\n",a);
	printf("b = %s##\n",b);
	scanf("%s",a);
	scanf("%s",b);
	printf("a = %s##\n",a);
	printf("b = %s##\n",b);

}

