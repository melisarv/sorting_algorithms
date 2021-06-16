#include "sort.h"

/**
 * quick_sort - sorts an array of integers using the Quick sort algorithm
 * @array: pointer of an array of integers
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	q_sort(array, 0, size - 1, size);
}

/**
 * q_sort - quicksort
 * @array: array of integers
 * @lo: lowest index
 * @hi: highest index
 * @size: size of array
 * Return: void
 */
void q_sort(int *array, size_t lo, size_t hi, size_t size)
{
	size_t p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		if (p > 0)
			q_sort(array, lo, p - 1, size);
		q_sort(array, p + 1, hi, size);
	}
}

/**
 * partition - Lomuto partition scheme
 * @array: array of integers
 * @lo: lowest index
 * @hi: highest index
 * @size: size of array
 * Return: pivot
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	int pivot = array[hi], temp;
	size_t i = lo, j;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j && array[i] != array[j])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != hi && array[i] != array[hi])
	{
		temp = array[i];
		array[i] = array[hi];
		array[hi] = temp;

		print_array(array, size);
	}
	return (i);
}
