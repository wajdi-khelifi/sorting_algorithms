#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *point;

	if (list == NULL || (*list)->next == NULL)
		return;
	point = (*list)->next;
	while (point)
	{
		while ((point->prev) && (point->prev->n > point->n))
		{
			point = change_point(point, list);
			print_list(*list);
		}
		point = point->next;
	}
}

/**
 *change_point - change point to his previous one
 *@point: point
 *@list: point list
 *Return: return a pointer to a point which was enter it
 */
listint_t *change_point(listint_t *point, listint_t **list)
{
	listint_t *back = point->prev, *current = point;

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
