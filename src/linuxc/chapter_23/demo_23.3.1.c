#include <stdio.h>

int main(int argc, char const *argv[])
{
	int index;
	int a[10];
	int *pa = &a[0];
	printf("%p\n", pa);

	pa++;
	printf("%p\n", pa);

	pa += 2;
	printf("%p\n", pa);

	//pa+2 指向pa当前指向元素之后的第二个元素
	// reset
	pa = &a[0];
	a[2] = 123;
	a[3] = 456;
	index = 2;
	printf("a[%d] = %d\n", index, a[index]);
	printf("pa[%d] = %d\n", index, pa[index]);  //a[2] 和 pa[2] 本质上是一样的 
	printf("2[pa] = %d\n", 2[pa]);

	//表达式 pa[-1] 是合法的,它和 pa 指向元素的前一个元素。
	// reset
	pa = &a[0];
	a[0] = 789;
	index = 0;
	printf("a[%d] = %d\n", index, a[index]);
	printf("pa[%d] = %d\n", index, pa[index]);

	index = -1;
	printf("pa[%d] = %d\n", index, pa[index]);

	int *px = a;
	printf("%p\n", px);

	pa += 5;

	printf("pa - px = %ld\n", pa - px); // should be 5; res:pa - px = 5
	return 0;
}