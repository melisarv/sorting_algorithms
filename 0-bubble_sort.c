#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * @array: pointer array of integers
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, endsize;

	if (size < 2)
		return;

	endsize = size - 1;
	while (endsize != 0)
	{

		for (i = 0; i < endsize; i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		endsize--;
	}
}
