#include "sort.h"
/**
 * swap - function that swaps array values
 * @x: first value
 * @y: second value
 * @size: size for print function
 * @array: array for print function
 *
 * Return: always void
 */
void swap(int *x, int *y, size_t size, int *array)
{
	int temp;
	int check;

	temp = *x;
	check = *y;
	*x = *y;
	*y = temp;
	if (temp != check)
		print_array(array, size);
}


/**
 * partition - function that returns pivot value
 * @array: array to be sorted
 * @low: low index of array
 * @high: high index of array
 * @size: size of array for printing
 *
 * Return: value around which partition will be made
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot_value, i, j;

	pivot_value = array[high];
	i = j = low;
	for ( ; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j], size, array);
			i++;
		}
	}
	swap(&array[i], &array[high], size, array);
	return (i);
}

/**
 * quicksort_recursion - function that recursively calls quicksort/partition
 * @array: given array to be sorted
 * @low: low index of array, bottom end of partition
 * @high: high index of array, top end of partition
 * @size: size for print function
 *
 * Return: always void
 */
void quicksort_recursion(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		quicksort_recursion(array, low, pivot_index - 1, size);
		quicksort_recursion(array, pivot_index + 1, high, size);
	}
}


/**
 * quick_sort - my quick sort function for arrays; wrapper function
 * @array: a given array of ints
 * @size: size of given array
 *
 * Return: always void
 */
void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1, size);
}
