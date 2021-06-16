#include "sort.h"

/**
 * selection_sort - sorts an array of integers. Selection sort algorithm
 * @array: pointer of an array of integers
 * @size: size of an array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;

		for (j = i + 1; j < size ; j++)
		{
			if (array[j] < array[idx])
				idx = j;
		}

		if (idx != i)
		{
			temp = array[i];
			array[i] = array[idx];
			array[idx] = temp;

			print_array(array, size);
		}
	}
}
