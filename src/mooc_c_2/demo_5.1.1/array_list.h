/*
 * array_list.h
 *
 *  Created on: Apr 8, 2015
 *      Author: lisong
 */
#ifndef _ARRAYLIST_H_
#define _ARRAYLIST_H_
typedef struct {

	int *arr;
	int size;

} ArrayList;

ArrayList array_create(int init_size);

void array_free(ArrayList *a);

int array_size(const ArrayList *a);

void array_set(ArrayList *a, int index, int value);

int array_get(const ArrayList *a, int index);

void array_inflate(ArrayList *a, int increment);

#endif
