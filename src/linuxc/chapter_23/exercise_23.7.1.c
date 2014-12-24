#include <stdio.h>


int main(int argc, char const *argv[]) {
	/*get 'r' a[2][2][1]*/
	char a[4][3][2] = {{{'a', 'b'}, {'c', 'd'}, {'e', 'f'}},
			{{'g', 'h'}, {'i', 'j'}, {'k', 'l'}},
			{{'m', 'n'}, {'o', 'p'}, {'q', 'r'}},
			{{'s', 't'}, {'u', 'v'}, {'w', 'x'}}};

	printf("%c\n", a[2][2][1]);

	char (*pa)[2] = &a[1][0];   /*char (*)[2] */
	printf("%c\n", (*(pa + 5))[1]);

	char (*ppa)[3][2] = &a[1];  /**ppa 指向一个二维数组*/
	printf("%c\n", (*(ppa + 1))[2][1]);

}