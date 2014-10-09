/*
 * demo.05.05.0.c
 *
 *  Created on: 2014年10月8日
 *      Author: lisong
 */
#include <stdio.h>

void demo05050_1() {
	printf("start\n\n");
	char *s = "I am a string";
	char *t;
	t = s;
	printf("t:%s\n", t);
	printf("s:%s\n", s);
	printf("s+1:-%c-\n", *(s + 2));
//	*(s + 3) = 'x'; 目测指针类字符串不能被修改值
	printf("t:%s\n", t);
	printf("s:%s\n", s);
	char amessage[] = "now is the time"; /* an array */
	*amessage = 'N';
	printf("amessage:%s\n", amessage);
//	char *pmessage = "now is the time"; /* a pointer */
}

/* strcpy: copy t to s; array subscript version */
void strcpy_a(char *s, char *t) {
	int i;
	i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}

/* strcpy: copy t to s; pointer version */
void strcpy_p(char *s, char *t) {
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

/* strcpy: copy t to s; pointer version 2 */
void strcpy_p2(char *s, char *t) {
	while ((*s++ = *t++) != '\0')
		;
}

/* strcpy: copy t to s; pointer version 3 */
void strcpy_p3(char *s, char *t) {
	while (*s++ = *t++)
		;
}

/* strcmp:
 return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmp(char *s, char *t) {
	int i;
	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;
	return s[i] - t[i];
}

/* strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmp_1(char *s, char *t) {
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}
