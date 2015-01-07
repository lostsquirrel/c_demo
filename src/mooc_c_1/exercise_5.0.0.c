#include <stdio.h>
#include <math.h>
/*
题目内容：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。
现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。

输入格式:
一个整数，范围在[2,100000]内。
输出格式：
形如：
     n=axbxcxd
或
     n=n
所有的符号之间都没有空格，x是小写字母x。
输入样例：
     18
输出样例：
     18=2x3x3
*/
int isPrime(int a);
void printCompositequantity(int c);

int main(int argc, char const *argv[])
{

	int s = 0;
	int x;
	scanf("%d", &x);
	if (x < 2 || x > 100000) {
		s = -1;
	} else {
		printf("%d=", x);
		if (isPrime(x)) {
			//当读到的就是素数时，输出它本身。
			printf("%d\n", x);
		} else {
			printCompositequantity(x);
		}
	}

	return s;
}

int isPrime(int a) {
	int s = 0;
	if (a > 1) {
		int i;
		for ( i = 2; i <= sqrt(a); ++i) {
			if (a % i == 0){
				s = 2;
				break;
			}
		}
		if (s == 0) {
			s = 1;
		} else {
			s %= 2;
		}
	} 
	return s;
}


void printCompositequantity(int c) {
	int i = 2;
	int j;
	while (!isPrime(c)) {
		int hit = 0;
		for (j = 2; j < c; j++) {
			// printf("j = %d, c = %d\n", j,  c);
			// printf("%d\n", isPrime(j) && (c % j == 0));
			if (isPrime(j) && (c % j == 0)) {
				c = c / j;
				i = j;
				printf("%dx", j);
				hit = 1;
				break;
			}
		}
		
	}
	
	printf("%d\n", c);
	
	
}