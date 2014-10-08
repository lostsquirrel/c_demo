/*
 * demo.05.05.0.c
 *
 *  Created on: 2014年10月8日
 *      Author: lisong
 */
#include <stdio.h>

void demo05050_1() {
	"I am a string";
	char amessage[] = "now is the time"; /* an array */
	char *pmessage = "now is the time"; /* a pointer */
}

/* strcpy: copy t to s; array subscript version */
void strcpy(char *s, char *t) {
	int i;
	i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}

/* strcpy: copy t to s; pointer version */
void strcpy(char *s, char *t) {
	int i;
	i = 0;
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

/* strcpy: copy t to s; pointer version 2 */
void strcpy(char *s, char *t) {
	while ((*s++ = *t++) != '\0')
		;
}

/* strcpy: copy t to s; pointer version 3 */
void strcpy(char *s, char *t) {
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
int strcmp(char *s, char *t) {
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}
