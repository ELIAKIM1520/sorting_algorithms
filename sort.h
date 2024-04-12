#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
  * struct listint_s - doubly linked list node
  *
  * @n: integer strored in the node
  * @prev: Pointer to the previous element of the list
  * @next: pointer to the next element in the list
  */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int lemuto_partition(int *array, int upper, int lower);
void quick_sorting(int *array, int lower, int upper);

#endif
