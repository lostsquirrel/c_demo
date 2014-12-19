#include <stdio.h>

enum coordinate_type { RECTANGULAR = 1, POLAR };

int main(void) {
	// int RECTANGULAR; //枚举的成员名却和变量名 在同一命名空间中,所以会出现命名冲突
	printf("%d %d\n", RECTANGULAR, POLAR);
	return 0;
}