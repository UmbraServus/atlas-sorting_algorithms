#include "sort.h"

/**
 * bubble_sort- sorts numbers using bubblesort and prints the array at ea swap
 * @array: points to an array of ints
 * @size: size of the array
 *
 * Return: VOID
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;


	for (a = 0; a < size - 1; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{

			temp = array[b];
			array[b] = array[b + 1];
			array[b + 1] = temp;
			print_array(array, size);

			}
		}
	}
}
