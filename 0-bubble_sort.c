#include "sort.h"
/**
 * bubble_sort - sort array elements from min to max
 * @array: array
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, mark, x = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (mark = 0; mark < size; mark++)
		{
			if (array[mark] >  array[mark + 1] && array[mark + 1])
			{
				x = array[mark];
				array[mark] = array[mark + 1];
				array[mark + 1] = x;
				print_array(array, size);
			}
		}
}
