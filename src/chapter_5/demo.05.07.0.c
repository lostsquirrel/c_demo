/*
 * demo.05.07.0.c
 *
 *  Created on: 2014年10月10日
 *      Author: lisong
 */
#include<stdio.h>

static char daytab[][13] = {
		{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
		{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
		{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
	};
int is_leap(int year) {
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day) {
	int i, leap;
	leap = is_leap(year);
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}

/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;
	leap = is_leap(year);
	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	*pmonth = i;
	*pday = yearday;
}

void demo05070_1() {
	int year = 2000;
	int month = 8;
	int day = 8;
	int yearday = day_of_year(year, month, day);
	printf("%d年%d月%d日是当年的第%d天    %d\n", year, month, day, yearday, is_leap(year));
	year = 2014;
	yearday = day_of_year(year, month, day);
	printf("%d年%d月%d日是当年的第%d天    %d\n", year, month, day, yearday, is_leap(year));
}
