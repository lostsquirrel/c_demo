#include<stdio.h>
int main(void)
{
	char c;
	char d;
	c = ' ';
	d = (char)(c + 1);
	while(c < d) {
		c++;
		d++;
		printf("c:%d, d:%d\n",c, d);
	}
	return 0;
}