#include "sort.h"

/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 *
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int tmp_prev = 0, tmp_min = 0, min = 0, flag_swap = 0;
	size_t idx = 0, pos = 0;

	if (!array || size <= 0)
		return;

	tmp_min = array[0];
	tmp_prev = tmp_min;

	while (array[idx])
	{
		if (idx + 1 == size)
		{
			if (flag_swap == 0)
			{
				min = pos;
			}
			array[min] = tmp_prev;
			array[pos] = tmp_min;
			if (flag_swap > 0)
			{
				print_array(array, size);
				flag_swap = 0;
			}
			if ((pos == size - 2 && flag_swap == 0) || pos == size - 2)
				return;
			pos++;
			idx = pos;
			tmp_min = array[pos];
			tmp_prev = tmp_min;
		}
		if (tmp_min > array[idx + 1])
		{
			flag_swap = 1;
			tmp_min = array[idx + 1];
			min = idx + 1;
		}
		idx++;
	}
}
