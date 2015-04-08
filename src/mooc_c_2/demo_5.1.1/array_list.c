/*
 * array_list.c
 *
 *  Created on: Apr 8, 2015
 *      Author: lisong
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "array_list.h"

void print_array(const ArrayList *a);

void fill_array(ArrayList *a) {
	int i;
	for (i = 0; i < a->size; i++) {
		array_set(a, i, i +100);
	}
}
int main(void) {

	ArrayList a;
	a = array_create(10);
	print_array(&a);

	fill_array(&a);
	print_array(&a);

	array_set(&a, 15, 111555);
	print_array(&a);

	array_free(&a);
	print_array(&a);
	return 0;
}

ArrayList array_create(int init_size) {

	ArrayList a;

	a.arr = (int *) malloc(init_size * sizeof(int));
	a.size = init_size;

	return a;
}

void array_free(ArrayList *a) {
	free(a->arr);
	a->arr = NULL;
	a->size = 0;
}

int array_size(const ArrayList *a) {
	return a->size;
}

void array_set(ArrayList *a, int index, int value) {
	if (index >= a->size) {
		array_inflate(a, array_size(a) / 2 + index);
	}
	a->arr[index] = value;
}

int array_get(const ArrayList *a, int index) {
	int res = NULL;
	if (index < a->size) {
		res = a->arr[index];
	}
	return res;
}

void array_inflate(ArrayList *a, int increment) {

	int size = array_size(a) + increment;
	int *array = (int *) malloc(size * sizeof(int));
	memcpy(array, a->arr, array_size(a) * sizeof(int));
	array_free(a);
	a->arr = array;
	a->size = size;

}

void print_array(const ArrayList *a) {
	int i;
	for (i = 0; i < a->size; i++) {
		printf("%d", array_get(a, i));
		if (i != a->size - 1) {
			printf(",");
		}
	}
	printf("\nsize %d\n", array_size(a));
}
