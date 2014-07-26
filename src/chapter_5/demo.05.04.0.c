#include <stdio.h>
#define ALLOCSIZE 10000 /* size of available space */

static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf; /* next free position */

char *alloc(int n) { /* return pointer to n characters */
	//allocbuf 是 allocbuf[0] 的指针
	if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
		allocp += n;
		return allocp - n; /* old p */
	} else
		/* not enough room */
		return 0;
}

void afree(char *p) /* free storage pointed to by p */
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

/* strlen: return length of string s version2*/
int strlen_2(char *s) {
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}

void demo05040_1() {
	printf("%ld\n", allocbuf - allocp);
}
