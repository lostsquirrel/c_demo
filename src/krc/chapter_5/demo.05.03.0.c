#include <stdio.h>

/* strlen: return length of string s */
int strlenx(char *s) {
	int n;
	for (n = 0; *s != '\0'; s++) {
		n++;
	}
	return n;
}

void demo05030_1() {
	int a[10];
	int i = 0;
	for (; i < 10; i++) {
		printf("a[%d]=%d\n", i, a[i]);
	}
	int *pa;
//	pa = &a[0];
	pa = a;
	i = 0;
	for (; i < 10; i++) {
		printf("ax=%d \n", *(pa + i));
	}


	int x;
	char* HELLO_WORLD = "hello, world";
	x = strlenx(HELLO_WORLD); /* string constant */
	printf("string constant %d \n", x);
	char array[] = "what day is it, today";
	x = strlenx(array); /* char array[100]; */
	printf("array %d \n", x);
	char * ptr = &array[0];
	x = strlenx(ptr); /* char *ptr; */
	printf("ptr %d \n", x);
	printf("%s\n",HELLO_WORLD);
}


