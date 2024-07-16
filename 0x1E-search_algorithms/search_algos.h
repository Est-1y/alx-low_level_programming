#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list structure.
 * @n: Integer n.
 * @index: Index
 * @next: Points to next node
 * Description: singly linked list node.
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list.
 * @n: Integer n.
 * @index: Index.
 * @next: Points to next node
 * @express: Points to the next node
 * Description: singly linked list node structure.
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search_mod(int *array, int min, int max, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, size_t low, size_t high, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
