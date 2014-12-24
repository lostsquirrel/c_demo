#include <stdio.h>
#include <math.h>

/*
题目内容：

你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。

如输入1234，则输出：

    yi er san si

注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：

    fu er san si yi

输入格式:

一个整数，范围是[-100000,100000]。

输出格式：

表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。

输入样例：

-30

输出样例：

fu san ling
*/
void printN(int n) {
	switch(n) {
		case 0:
		printf("%s", "ling");
		break;
		case 1:
		printf("%s", "yi");
		break;
		case 2:
		printf("%s", "er");
		break;
		case 3:
		printf("%s", "san");
		break;
		case 4:
		printf("%s", "si");
		break;
		case 5:
		printf("%s", "wu");
		break;
		case 6:
		printf("%s", "liu");
		break;
		case 7:
		printf("%s", "qi");
		break;
		case 8:
		printf("%s", "ba");
		break;
		case 9:
		printf("%s", "jiu");
		break;
	}
	
}
void printNumber(int n) {
	int m;
	if (n < 0) {
		printf("%s", "fu ");
		n = abs(n);
	} 

	if ( n >= 10) {
		printNumber(n / 10);
		printf("%s", " ");
	}
	m = n % 10;	
	printN(n % 10);
		
	
}
int main(int argc, char const *argv[])
{
	int x;
	scanf("%d", &x);

	printNumber(x);
	printf("%s\n", "");
	return 0;
}