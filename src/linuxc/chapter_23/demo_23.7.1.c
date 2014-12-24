#include <stdio.h>

/* this should not be finished*/
int main(int argc, char const *argv[]) {
	int x;
	void *y;
	int z[1];
	printf("%p \t <-z\n", z);
	/*
	z = x; error: incompatible types when assigning to type ‘int[1]’ from type ‘int’
	x = z; warning: assignment makes integer from pointer without a cast [enabled by default]
	x = &z;
	*/

	printf("%p \t <-&z\n", &z);
	printf("%p \t <-&z[0]\n", &z[0]);
	int *a[10]; /*一个指向int数组的指针 <- more than that*/

	printf("%p \t<-a\n", a);

	/*
	typedef int *t;
	t a1[10];
	a = a1;  error: incompatible types when assigning to type ‘int *[10]’ from type ‘int **’
	printf("%p \t<-a\n", a);
	*/
	/*
	a++; error: lvalue required as increment operand
	printf("%p \t<-a\n", a);
	*/
	/*
	int b[20];
	a = b;   error: incompatible types when assigning to type ‘int *[10]’ from type ‘int *’
	a = &b;   error: incompatible types when assigning to type ‘int *[10]’ from type ‘int (*)[20]’
	printf("%p \t<-a\n", a);
	*/

	int (*c)[10];
	printf("%p \t<-c\n", c);
	c++;  /*the lenth of 10  int */
	printf("%p \t<-c\n", c);
	typedef int r[10];
	r *c1;
	c = c1;
	printf("%p \t<-c\n", c);
	/*
	c = a; warning: assignment from incompatible pointer type [enabled by default]
	a = c; error: incompatible types when assigning to type ‘int *[10]’ from type ‘int (*)[10]’
	*/
	return 0;
}