#include <stdio.h>

void increment(int *x) {
	*x += 1;
} 

int main(int argc, char const *argv[])
{
	int i = 0;
	increment(&i);
	printf("i = %d\n", i);
	
	increment(&i);
	printf("i = %d\n", i);

	increment(&i);
	printf("i = %d\n", i);
	return 0;
}