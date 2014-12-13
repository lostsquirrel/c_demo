#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE];  /* longest line saved here */

int getxxline(void);
void copy01100(void);

/* print longest input line; specialized version */
void demo01100() {
	int len;
	extern int max;
	extern char longest[];
	max = 0;
	while ((len = getxxline()) > 0)
		if (len > max) {
			max = len;
			copy01100();
		}
	if (max > 0)
		/* there was a line */
		printf("%s", longest);
}

//int main() {
//	demo();
//	return 0;
//}

/* getline: specialized version */
int getxxline(void) {
	int c, i;
	extern char line[];
	for (i = 0; i < MAXLINE - 1
		&& (c=getchar()) != EOF && c != '\n'; ++i ) {
		line[i] = c;
	}

	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}

/* copy01100: specialized version */
void copy01100(void) {
	int i;
	extern char line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\0'){
		++i;
	}
}
