#include <stdio.h>

int get_max_convention(int x, int y) {
	if (x % y == 0) {
		return y;
	} else {
		return get_max_convention(y, x % y);
	}
}

int main(int argc, char const *argv[])
{
	
	printf("%d\n", get_max_convention(319, 377));
	printf("%d\n", get_max_convention(12, 16));
	return 0;
}