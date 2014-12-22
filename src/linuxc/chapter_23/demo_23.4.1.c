#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int *a;
	int const *x;
	printf("%p\n", a);  // 0x7fff15cea290
	printf("%p\n", x); //(nil)   why?

	/*a 是一个指向 const int 型的指针, a 所指向的内存单元不可改写,所以 (*a)++ 是不允许的,但 a 可以改写,所以 a++ 是允许的*/
	/**a = 1; // assignment of read-only location ‘*a’ ;*/

	printf("%d\n", *(a++)); /*unbond pointer*/


	int * const b;
	/*b 是一个指向 int 型的 const 指针, *b 是可以改写的,但 b 不允许改写。*/
	*b = 1;
	*b = 2;
	/*b++;    //increment of read-only variable ‘b’*/

	const int * const c; /*same as int const * const c*/
	/*c 是一个指向 const int 型的 const 指针,因此 *c 和 c 都不允许改写。*/

	/**c++;  increment of read-only variable ‘c’*/
	/*c++; increment of read-only variable ‘c’*/


	char *p = "abcd";  /*compile ok*/
	*p = 'A';  /*段错误 (核心已转储) */
	/*p 指向 .rodata 段,不允许改写,但编译器不会报错,在运行时会出现段错误。*/
	return 0;
}