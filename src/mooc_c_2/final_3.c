/*
 * final_3.c
 *
 *  Created on: May 10, 2015
 *      Author: lisong
 */

#include <stdio.h>
#include <string.h>

char* add(char* x, char *y);
char* minus(char* x, char *y);
char* muti(char* x, char *y);
int main(void) {
	char a[50];
	char b[50];
	scanf("%s", a);
	scanf("%s", b);
	printf("%d %d", (int) strlen(a), (int) strlen(b));
	int a_length = (int) strlen(a);
	int b_length = (int) strlen(b);
	int a_tag = 1;
	int i;
	if (a[0] == '-') {
		a_tag = -1;
		for (i = 1; i < a_length; i++) {
			a[i - 1] = a[i];
		}
		a_length -= 1;
	}
	int b_tag = 1;
	if (b[0] == '-') {
		b_tag = -1;
		for (i = 1; i < b_length; i++) {
			b[i - 1] = b[i];
		}
		b_length -= 1;
	}
	char c[51];
	int i;
//	for (i = 0; i < 50; i++) {
//		printf("%c", a[i]);
//		printf("%c", b[i]);
//	}
	if (a_tag > 0) {
		if (b_tag > 0) {
			//+
			printf("%s", add(a, b));
			//-
			if (a > b) {
				printf("%s", add(a, b));
			} else {
				printf("%s", minus(b, a));
			}
			//*
			printf("%s", minus(b, a));
		} else {

		}
	} else {
		if (b_tag > 0) {

		} else {

		}
	}
}
char* add( x, y) {

}
char* minus( x, y) {

}
char* muti( x, y) {

}
