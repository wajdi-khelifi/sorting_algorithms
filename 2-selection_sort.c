#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, mark;
	int x, chng, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		x = i;
		flag = 0;
		for (mark = i + 1; mark < size; mark++)
		{
			if (array[x] > array[mark])
			{
				x = mark;
				flag += 1;
			}
		}
		chng = array[i];
		array[i] = array[x];
		array[x] = chng;
		if (flag != 0)
			print_array(array, size);
	}
}
