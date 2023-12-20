#include "sort.h"
/**
 * selection_sort - algorithm for perform selection sort on arrays of ints
 * @array: array of ints
 * @size: size of array
 *
 * Return: always void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp, has_swapped;
	
	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		has_swapped = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
				has_swapped = 1;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		if (has_swapped == 1)
			print_array(array, size);
	}
}
