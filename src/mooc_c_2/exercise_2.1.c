/*
 * exercise_2.1.c
 *
 *  Created on: Mar 22, 2015
 *      Author: lisong
 */

#include <stdio.h>
#include <string.h>

int main(void) {
/*	1删除字符串中的子串（5分）
	题目内容：
	输入2个字符串S1和S2，要求删除字符串S1中出现的所有子串S2，即结果字符串中不能包含S2。
	提示：输入数据的设计使得不可能出现输出为空的情况。

	输入格式:
	输入分别给出2个每个不超过80个字符长度的不带空格的非空字符串，对应S1和S2。

	输出格式：
	在一行中输出删除字符串S1中出现的所有子串S2后的结果字符串。

	输入样例：
	Thisisatest is

	输出样例：
	Thatest*/
	char s1[80];
	char s2[80];
	char temp[80];
	char res[80];
	scanf("%s %s", s1, s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 < len2) {
		strcpy(res, s1);
	} else {

		int i;
		int j;
		for (i = 0, j = 0; i < len1; ) {
			memcpy(temp, &s1[i], len2);
			temp[len2] = '\0';
			if (strcmp(temp, s2) == 0) {
				i += len2;
			} else {
				res[j] = s1[i];
				j++;
				i++;
			}
		}
		res[j] = '\0';
	}
	printf("%s\n", res);

	return 0;
}
