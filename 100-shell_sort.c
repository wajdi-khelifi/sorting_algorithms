#include "sort.h"
/**
 *@swap - the positions of two elements into an array
 *@array: array
 *@elem1: array elemnt
 */
void swap(int *array, int elem1, int elem2)
{
	int x;

	x = array[elem1];
	array[elem1] = array[elem2];
	array[elem2] = x;
}

/**
 * shell_sort - function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 * @size: size of the array
 * @array: list with numbers
 */
void shell_sort(int *array, size_t size)
{
	size_t slot = 1, i, guide = 0;

	if (array == NULL || size < 2)
		return;
	while (slot < size / 3)
		slot = 3 * slot + 1;
	while (slot >= 1)
	{
		for (i = slot; i < size; i++)
			for (guide = i; guide >= slot &&
					(array[guide] < array[guide - slot]); guide -= slot)
				swap(array, guide, guide - slot);
		print_array(array, size);
		slot /= 3;
	}
}
