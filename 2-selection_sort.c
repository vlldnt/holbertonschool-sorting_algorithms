#include "sort.h"

/**
 * selection_sort - Sort an array with the selection sorting
 * @array: pointer to the array
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, small;

	for (i = 0; i < size; i++)
	{
		small = array[i];

		for (j = i; j < size; j++)
		{
			if (small > array[j])
			{
				small = array[j];
				temp = j;
			}
		}
		if (small != array[i])
		{
			array[temp] = array[i];
			array[i] = small;
			print_array(array, size);
		}
	}
}
