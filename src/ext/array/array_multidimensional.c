/*
 * 多维数组的 声明和使用
 * created at 2015-05-15
 */
#include <stdio.h>

void print2DArray(int a[][4], int size[]);
void print3DArray(int a[1][10][4], int size[]);
int main(void) {

	/*定义多维数组 type name[size1][size2]...[sizeN];*/
	int threedim[5][10][4];
	int ths[] = {5, 10, 4};
	print3DArray(threedim, ths);
	/*定义二维数组 type arrayName [ x ][ y ];*/
	int twodim[5][4];

	/*初始化二维数组*/
	int a[3][4] = {
	 {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
	 {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
	 {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
	};

	/*定义同时初始化多维数组时,大括号可以省略*/
	int b[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int size[] = {3, 4};
	print2DArray(b, size);
	/*可通过下标取得二维数组的值*/
	int val = a[2][3];
	return 0;
}

void print2DArray(int a[][4], int size[]) {
	int i, j;
	for (i = 0; i < size[0]; i++) {
		for(j = 0; j < size[1]; j++) {
			if (j != 0) {
				printf(", ");
			}
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}

void print3DArray(int a[1][10][4], int size[]) {
	int i, j, k;
	for (i = 0; i < size[0]; i++) {

		printf("\t-----\n");
		for(j = 0; j < size[1]; j++) {
			printf("\t\t");
			for (k = 0; k < size[2]; k++) {
				if (k != 0) {
					printf(", ");
				}
				printf("%d", a[i][j][k]);
			}
			printf("\n");
		}

	}
}
