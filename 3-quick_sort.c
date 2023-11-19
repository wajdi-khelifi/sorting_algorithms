#include "sort.h"
/**
 *change - change the positionsof 2 elements into an array
 *@array: array
 *@elem1: array element
 *@elem2: array element
 */
void change(int *array, ssize_t elem1, ssize_t elem2)
{
	int x;

	x = array[elem1];
	array[elem1] = array[elem2];
	array[elem2] = x;
}

/**
 *lomuto - lomuto prtition sorting schema implementation
 *@array : array
 *@first: the first array element
 *@last: the last array element
 *@size: the size of the array
 *Return: return the position of the last elment sorted
 */
int lomuto(int *array, ssize_t first, ssize_t last, size_t size)
{
	int temp = array[last];
	ssize_t current = first, search;

	for (search = first; search < last; search++)
	{
		if (array[search] < temp)
		{
			if (array[current] != array[search])
			{
				change(array, current, search);
				print_array(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[last])
	{
		change(array, current, last);
		print_array(array, size);
	}
	return (current);
}

/**
 *quick_s - qucksort algorithm implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: array size
 */
void quick_s(int *array, ssize_t first, ssize_t last, int size)
{
	ssize_t place = 0;

	if (first < last)
	{
		place = lomuto(array, first, last, size);

		quick_s(array, first, place - 1, size);
		quick_s(array, place + 1, last, size);
	}
}

/**
 *quick_sort - prepare the terrain to quicksort algorithm
 *@array: array
 *@size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_s(array, 0, size - 1, size);
}
