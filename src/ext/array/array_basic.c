/*
 * 一维数组的 声明和使用
 * created at 2015-05-15
 */

#include <stdio.h>

typedef enum {INT, DOUBLE, SEARCH} strategy;
void printIntArray(int a[], int size);
void printDoubleArray(double a[], int size);
void printArray(void *a, int size, strategy dataType);


int main(void)
{
	/* 定义数组 type arrayName [ arraySize ];
	 * arraySize : 正整数常量
	 * type: 任何有效的C类型
	 * */
	double balance[10];

	/*给数组指定索引元素赋值,  索引从零开始*/
	balance[4] = 50.0;
	printDoubleArray(balance, sizeof(balance)/sizeof(double));

	/*在定义数组进初始化
	{}内的元素个数不能大于[] 中常量*/
	double balance1[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
	printDoubleArray(balance1, sizeof(balance1)/sizeof(double));

	/*在定义数组时初始化并且不指定数组大小,则数组大小为 {}中元素的个数*/
	double balance2[] = {1000.0, 2.0, 3.14, 7.0, 50.0, 0.125, 4.18, 9.8};
	printDoubleArray(balance2, sizeof(balance2)/sizeof(double));

	/*从数组中取值, 表示 将balance数组中的第10个元素赋值给变量 salary*/
	double salary = balance[9];
	printf("salary = %.2f\n", salary);
	return 0;
}
/*failed
 *
void printArray(void *a, int size, strategy dataType) {

	int i;
	char * type_formater[] = {"%d", "%f"};
	for (i = 0; i < size; i++) {
		printf(type_formater[dataType], a[i]);
	}
}
*/

void printIntArray(int a[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d, ", a[i]);
	}
	printf("\n");
}
void printDoubleArray(double a[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (i != 0) {
			printf(", ");
		}
		printf("%.2f", a[i]);
	}
	printf("\n");
}
