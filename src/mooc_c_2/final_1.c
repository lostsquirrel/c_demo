/*
 * final_1.c
 *
 *  Created on: May 10, 2015
 *      Author: lisong
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char c;
	struct node *next;
	struct node *prev;
} Node;

typedef struct {
	Node *head;
	Node *tail;
	int size;
} List;
int main(void) {
	char c;
	int times;
	List *list = (List *) malloc(sizeof(List));
	while ((c = getchar()) != '#') {
//		printf("%c", c);
		Node *x = (Node *) malloc(sizeof(Node));
		x->c = c;
		if (list->head == NULL) {
			list->head = x;
			list->size = 1;
		} else {
			x->prev = list->tail;
			list->tail->next = x;
			list->size += 1;
		}
		list->tail = x;
	}
	/*
	 Node *m = list->head;
	 while (m != NULL) {
	 printf("%c", m->c);
	 m = m->next;
	 }
	 printf("\n");
	 */
	scanf("%d", &times);
	//	printf("%d", times);
	if (list->size > 1) {

		while (times) {
			Node *ct = list->tail;
			Node *pct = ct->prev;
			pct->next = NULL;
			ct->next = list->head;
			list->head->prev = ct;
			list->head = ct;
			list->tail = pct;
			times--;
		}
	}
	Node *n = list->head;

	while (n != NULL) {
		printf("%c", n->c);
		n = n->next;
	}

//	printf("%d", times);
	printf("\n");
}
