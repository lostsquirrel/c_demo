/*
 * demo_3.2.1.c
 *
 *  Created on: Apr 3, 2015
 *      Author: lisong
 */

#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};

void print_date(struct date date);
struct date * print_date2(struct date *p_date); // param should be const

int main(void) {

	struct date today = {3, 4, 2015};
	print_date(today);

	struct date m = {.month =  4, .year = 2015};
	print_date(m);

	struct date n;
	print_date(n);

	struct date *p_date = &today;
	printf("pointer of today is %p\n", p_date);

	print_date(*print_date2(p_date));
	return 0;
}

void print_date(struct date date) {
	printf("day:%d, month:%d, year:%d \n", date.day, date.month, date.year);
}

struct date * print_date2(struct date *p_date){
	printf("day:%d, month:%d, year:%d \n", p_date->day, p_date->month, p_date->year);
	return p_date;
}
