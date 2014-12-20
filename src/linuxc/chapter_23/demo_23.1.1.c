#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	int *pi = &i;
	printf("i = %d\n", i);
	printf("pi = %p\n", pi);
	printf("*pi = %d\n", *pi);

	char c;
	char *pc = &c;
	printf("i = -->%c<--the content\n", c);
	printf("pc = %p\n", pc);
	printf("*pc = -->%c<--the content\n", *pc);

	int *p, *q;   /*表示指针变量p 和 q*/
	/*int *p, q;   表示指针变量p, 整数变量q*/

	i = 2;
	*pi += 10;
	printf("i = %d\n", i);
	printf("pi = %p\n", pi);
	printf("*pi = %d\n", *pi);

	int *ptri = pi;
	p = ptri;
	printf("pi = %p\n", pi);
	printf("p = %p\n", p);
	printf("ptri = %p\n", ptri);

	return 0;
}