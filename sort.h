#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/* Data Structure and Functions */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Task 0 : Bubble sort */
void bubble_sort(int *array, size_t size);

/* Task 1 : Insertion sort */
void insertion_sort_list(listint_t **list);
listint_t *change_point(listint_t *point, listint_t **list);

/* Task 2 : Selection sort */
void selection_sort(int *array, size_t size);

/* Task 3 : Quick sort */
void change(int *array, ssize_t elem1, ssize_t elem2);
int lomuto(int *array, ssize_t first, ssize_t last, size_t size);
void quick_s(int *array, ssize_t first, ssize_t last, int size);
void quick_sort(int *array, size_t size);

#endif
