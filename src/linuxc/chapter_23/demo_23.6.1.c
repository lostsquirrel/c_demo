#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 123;
	int *p1 = &i;
	int **p2 = &p1;
	int ***p3 = &p2;

	
	
	// ***p = 123;
	printf("%p \t &p3\n", &p3); 
	printf("%p \t p3\n", p3); 
	printf("%p \t *p3\n", *p3);

	printf("%p \t &p2\n", &p2); 
	printf("%p \t p2\n", p2); 
	printf("%p \t *p2\n", *p2); 

	printf("%p \t &p1\n", &p1); 
	printf("%p \t p1\n", p1); 
	printf("%d \t *p1\n", *p1); 

	printf("%p \t &i\n", &(i)); 

	printf("%d \t ***p3\n", ***p3);

	printf("%p \t  &(***p3)\n", &(***p3));
	printf("%p \t **p3\n", **p3);

	printf("%p \t &(**p3)\n", &(**p3));
	printf("%p \t *p3\n", *p3);

	printf("%p \t &(*p3)\n", &(*p3));
	printf("%p \t p3\n", p3); 

	return 0;
}