#include <stdio.h>

void func(void *pv, int type) {
	if (type == 0) {
		/* *pv = 'A' is illegal */
		char *pchar = pv;
		*pchar = 'A';
	} else if (type == 1) {
		int *pint = pv;
		*pint = 123;
	} else {
		/**pv = 'A' ;  invalid use of void expression*/
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	char c;
	func(&c, 0);
	printf("%c\n", c);
	int i;
	func(&i, 1);
	printf("%d\n", i);
	return 0;
}