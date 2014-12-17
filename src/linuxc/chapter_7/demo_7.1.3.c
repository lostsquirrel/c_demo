#include <stdio.h>


struct complex_struct { double x, y; };

void print_complex_struct(struct complex_struct z) {
	if (z.y < 0)
		printf("z=%f%fi\n", z.x, z.y);
	else
		printf("z=%f+%fi\n", z.x, z.y);
}

int main(void) {

	/*定义时初始化*/
	struct complex_struct z = { 3.0, 4.0 };
	double x = 3.0;
	struct complex_struct z1 = { x, 4.0, };  
	struct complex_struct z2 = { 3.0, };
	struct complex_struct z3 = { 0 }; 
	
	print_complex_struct(z);
	
	print_complex_struct(z1);
	print_complex_struct(z2);
	print_complex_struct(z3);
/*
	Error:
	struct complex_struct z5;
	z5 = { 3.0, 4.0 };
	print_complex_struct(z5);
*/

	/*
	Initializer → 表达式
	Initializer → { 初始化列表 }
	初始化列表 → Designated-Initializer, Designated-Initializer, ...
	(最后一个Designated-Initializer末尾可以有一个多余的,号)
	Designated-Initializer → Initializer
	Designated-Initializer → .标识符 = Initializer
	Designated-Initializer → [常量表达式] = Initializer
	*/

	/*Designated Initializer是C99引入的新特性,用于初始化稀疏(Sparse)结构体和稀疏数组很方
	便。有些时候结构体或数组中只有某一个或某几个成员需要初始化,其它成员都用0初始化即可,
	用Designated Initializer语法可以针对每个成员做初始化(Memberwise Initialization),很方便。
	例如:*/

	struct complex_struct z6 = { .y = 4.0 }; /* z1.x=0.0, z1.y=4.0 */
	print_complex_struct(z6);
	return 0;
}