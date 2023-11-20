#include "sort.h"
/**
 *cocktail_sort_list - this is a cocktail sort implementation
 *working on a double linked lists
 *@list: list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *point;
	int ch_done = 1;

	if (list == '\0' || (*list) == '\0' || (*list)->next == '\0')
		return;
	point = *list;
	while (ch_done == 1)
	{
		ch_done = 0;
		while (point->next)
		{
			if (point->n > point->next->n)
			{
				point = change_point(point->next, list);
				ch_done = 1;
				print_list(*list);
			}
			point = point->next;
		}
		if (ch_done == 0)
			break;
		ch_done = 0;
		while (point->prev)
		{
			if (point->n < point->prev->n)
			{
				point = change_point(point, list);
				ch_done = 1;
				print_list(*list);
			}
			else
				point = point->prev;
		}
	}
}
