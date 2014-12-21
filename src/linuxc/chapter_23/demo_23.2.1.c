#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a  = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{
	int i = 1;
	int j = 2;
	printf("i = %d,j = %d\n", i, j);
	swap(&i, &j);
	printf("i = %d,j = %d\n", i, j);
	return 0;
}