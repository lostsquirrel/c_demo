#include <stdio.h>
#include <math.h>

/*
题目内容：

我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。

现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。


输入格式:

两个整数，第一个表示n，第二个表示m。


输出格式：

一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。


输入样例：

2 4 


输出样例：

15
*/
int isPrime(int x) {
	int i;
	if (x <= 1) {
		return 0;
	} else if (x == 2) {
		return 1;
	} else {
		for ( i = 2; i <= sqrt(x); ++i) {
			if (x % i == 0){
				return 0;
			}
		}
		return 1;
	}
	
}
int main(int argc, char const *argv[]) {
	int m,n;
	int count = 0;
	int sum = 0;
	scanf("%d", &m);
	scanf("%d", &n);

	int i;
	for (i = 1; count <= 200; i++) {
		if (isPrime(i)) {
			count++;
			if (count >= m && count <= n) {
				sum += i;
				// printf("%d\n", i);
			}
		}
		
		
	}
	printf("%d\n", sum);	
	return 0;
}