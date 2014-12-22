#include <stdio.h>

void print_a(int a[3], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
} 

void print_b(int a[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}

void print_c(int *a, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
} 

int main(int argc, char const *argv[])
{
	int x[3] = {1, 2, 3};
	int n = 3;
	print_a(x, n);
	print_b(x, n);
	print_c(x, n);

	int y[4] = {1, 2, 3, 4};
	int m = 4;
	print_a(y, m);
	print_b(y, m);
	print_c(y, m);

	// the 3 in function print_a is meaningless?
	return 0;
}