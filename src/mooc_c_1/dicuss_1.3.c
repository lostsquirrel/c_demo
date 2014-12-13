#include <stdio.h>

int main(void) {
	int a = 5;
	int c;
	int b;
	c = (b=a+2) - (a=2);  // 5? 2?
	printf("c = %d\n", c);
}