#include "sort.h"

/**
 * bubble_sort - function that implements buble sorting
 * algorithm to sort its elements
 * @array: array of integers
 * 
 * @size: size of array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t index = 0;
	int tmp = 0;
	int count = 0;

	if (!array)
		return;

	while (array[index])
	{

		if (index + 1 == size)
		{
			if (count == 0)
				return;
			count = 0;
			index = 0;
		}

		if (array[index] > array[index + 1])
		{
			count++;
			tmp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = tmp;
			print_array(array, size);
		}
		index++;
	}
}
