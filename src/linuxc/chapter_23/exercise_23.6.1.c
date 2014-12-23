#include <stdio.h>

int main(int argc, char const *argv[]) {
	/* code */
	int i = 'a';
	int *j;
	j = &i;
	// printf("j = %p\n", j);
	// j++;
	// printf("j = %p\n", j);
	
	printf("&j = %p\n", &j);
	const char **p1;
	p1 = &j;
	printf("p1 = %p\n", p1);
	p1++;
	printf("p1 = %p\n", p1);
	p1--;

	printf("*p1 = %p\n", *p1);
	(*p1)++;
	printf("*p1 = %p\n", *p1);
	(*p1)--;
	printf("**p1 = %c\n", **p1);
	
	/*(**p1)++;*/
	/***p1 = 1; */ /*assignment of read-only location ‘**p1’*/
	


	char *const *p2;  /* pointer and value should not be changed*/

	p2 = &j;
	printf("p2 = %p\n", p2);
	p2++;
	printf("p2 = %p\n", p2);
	p2--;

	printf("*p2 = %p\n", *p2);    /*increment of read-only location ‘*p2’*/
	// (*p2)++;
	printf("*p2 = %p\n", *p2);
	// (*p2)--;
	printf("**p2 = %c\n", **p2);

	(**p2)++;
	printf("**p2 = %c\n", **p2);
	/* the result is only *p2 cannot be changed, why?*/

	char **const p3; /*both pointer should be changed*/

	p3 = &j; /*assignment of read-only variable ‘p3’*/  /*cannot be continued*/
	printf("p3 = %p\n", p3);
	// p3++;
	printf("p3 = %p\n", p3);
	// p3--;
	// int **k;
	// k = p3;
	// k = j;
	// (**p3)++;
	printf("*p3 = %p\n", *p3);    
	// (*p3)++;
	printf("*p3 = %p\n", *p3);
	// (*p3)--;
	printf("**p3 = %c\n", **p3);

	printf("**p3 = %c\n", **p3);
	return 0;
}