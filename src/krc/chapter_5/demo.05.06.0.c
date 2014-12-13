/*
 * demo.05.06.0.c
 *
 *  Created on: 2014年10月10日
 *      Author: lisong
 */
#include <stdio.h>
#include <string.h>

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines) {
	while (nlines-- > 0)
		printf("%s\n", *lineptr++);
}


/* swap: interchange v[i] and v[j] */
void swap(char *v[], int i, int j) {
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

//疑似排序没对
/* qsort: sort v[left]...v[right] into increasing order */
void qsort(char *v[], int left, int right) {
	int i, last;
	if (left >= right) /* do nothing if array contains fewer than two elements*/
		return;

	swap(v, left, (left + right) / 2);
	last = left;

	for (i = left + 1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}


void demo05060_1() {
	int nlines = 6;
	char *lineptr[6];

	lineptr[0] = "qsort(lineptr, 0, nlines-1);";
	lineptr[1] = "writelines(lineptr, nlines);------------------------------";
	lineptr[2] = "return 1;";
	lineptr[3] = "return 0;";
	lineptr[4] = "printf(\"error: input too big to sort\");";
	lineptr[5] = "printf";

	qsort(lineptr, 0, nlines - 1);
	writelines(lineptr, nlines);
}
