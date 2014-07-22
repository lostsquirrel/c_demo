#include <stdio.h>

void demo05010_1() {

	int x = 1;
	int y = 2;
	int z[10];
	int i = 0;
	for (; i < 10; i++) {
		printf("arr[%d]=%d\n", i, z[i]);
	}
//	printia(z[10])
	int *ip; /* ip is a pointer to int */
	ip = &x; /* ip now points to x */

	y = *ip; /* y is now 1 */
	*ip = 0; /* x is now 0 */
	printf("x:%d, y:%d\n", x, y);
	ip = &z[0]; /* ip now points to z[0] */
	printf("*ip:%d, z[0]:%d \n", *ip, z[0]);
	*ip += 10;
	printf("*ip:%d, z[0]:%d \n", *ip, z[0]);
}
