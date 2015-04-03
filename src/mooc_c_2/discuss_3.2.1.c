/*
 * discuss_3.2.1.c
 *
 *  Created on: Apr 3, 2015
 *      Author: lisong
 *      check the sizeof a structs and the pointer of each field is successive
 *
 *      pointer of struct:	0x7fff57c2b580
pointer of c(char):	0x7fff57c2b580
pc - pt:	0  第一个字段指针与结构体相同
pointer of s(short):	0x7fff57c2b582
sizeof(char):	1
ps - pc:	2 第一个字段 char 是1个字节，第二个字段指针与第一个字段指针相差2个字节 total:2
pointer of i(int):	0x7fff57c2b584
sizeof(short):	2
pi - ps:	2 第 二个字段 short是1个字节，第三个字段指针与第二个字段指针相差2个字节 total 4
pointer of l(long):	0x7fff57c2b588
sizeof(int):	4
pl - pi:	4 第 三个字段 int是4个字节，第四个字段指针与第三个字段指针相差4个字节 total 8
pointer of d(double):	0x7fff57c2b590
izeof(long):	8
pd - pl:	8 第 四个字段 long是8个字节，第四个字段指针与第三个字段指针相差8个字节 total 16
sizeof(double):	8 第 五个字段 double是8个字节， total 24
sizeof(struct tester):	24
 */

#include <stdio.h>

struct tester {
	char c;
	short s;
	int i;
	long l;
	double d;
};
int main(void) {

	struct tester t;
	struct tester *pt = &t;
	printf("pointer of struct:\t%p\n", pt);

	printf("pointer of c(char):\t%p\n", &pt->c);
	printf("pc - pt:\t%ld\n", (long)&pt->c - (long)pt);

	printf("pointer of s(short):\t%p\n", &pt->s);
	printf("sizeof(char):\t%ld\n",sizeof(char));
	printf("ps - pc:\t%ld\n", (long)&pt->s -  (long)&pt->c);

	printf("pointer of i(int):\t%p\n", &pt->i);
	printf("sizeof(short):\t%ld\n",sizeof(short));
	printf("pi - ps:\t%ld\n", (long)&pt->i -  (long)&pt->s);

	printf("pointer of l(long):\t%p\n", &pt->l);
	printf("sizeof(int):\t%ld\n", sizeof(int));
	printf("pl - pi:\t%ld\n", (long)&pt->l -  (long)&pt->i);

	printf("pointer of d(double):\t%p\n", &pt->d);
	printf("izeof(long):\t%ld\n", sizeof(long));
	printf("pd - pl:\t%ld\n", (long)&pt->d - (long) &pt->l);

	printf("sizeof(double):\t%ld\n", sizeof(double));
	printf("sizeof(struct tester):\t%ld\n", sizeof(struct tester));

	return 0;
}
