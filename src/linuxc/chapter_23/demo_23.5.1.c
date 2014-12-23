#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct unit {
		char c;
		int num;
	};
	struct unit u;
	struct unit *p = &u;
	u.c = 'A';
	u.num = 12;

	printf("%c\n", (*p).c);
	printf("%d\n", (*p).num);

	printf("%c\n", p->c);
	printf("%d\n",p->num);
	return 0;
}