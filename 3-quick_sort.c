#include "sort.h"

/**
 * swap - function that switch 2 element of an array
 * @x: element
 * @y: element
 * @array: array to sort
 * @size: size of array
 */

void swap(int *x, int *y, size_t size, int *array)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	print_array(array, size);
}

/**
 * partition - function that calculates the index of the pivot
 * @array: array to sort
 * @start: the first element in the array
 * @end: the last element in the array
 * @size: size of array
 *
 * Return: index of pivot
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end], i, j;

	i = (start - 1);

	for (j = start; j <= end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j && i >= 0)
				swap(&array[i], &array[j], size, array);
		}
	}
	if (array[end] != array[i + 1])
		swap(&array[i + 1], &array[end], size, array);

	return (i + 1);
}

/**
 * quicksort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *
 * @array: array to sort
 * @start: start of array
 * @end: end of array
 * @size: size of array
 */
void quicksort(int *array, int start, int end, size_t size)
{
	int pivot = 0;

	if (end > start)
	{
		pivot = partition(array, start, end, size);
		quicksort(array, start, pivot - 1, size);
		quicksort(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int start = 0;
	int end = 0;

	end = size - 1;

	quicksort(array, start, end, size);
}
