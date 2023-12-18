#include "sort.h"
/**
 * bubble_sort - bubble sort sorting algorithm
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: always void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	int i;
	int j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
