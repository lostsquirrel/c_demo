#include <stdio.h>
#include <math.h>

int main(void) {
	int a;
	scanf("%d", &a);
	int c;
	int res = 0;
	int count = 0;

	do {
		//取下最后一位
		c = a % 10;

		//直接将二进制转成十进制
		res += ((c % 2) == ((count + 1) % 2) )* pow(2, count);
		//支掉最后一位
		a = a / 10;
		count++;

	} while (a > 0);
	
	printf("%d\n", res);
}