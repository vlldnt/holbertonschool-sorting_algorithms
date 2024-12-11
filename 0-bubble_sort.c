#include <stdlib.h>
#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - sort the array with buubble sort style
 * @array: the array you need to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, step;
	int temp;

	if (array == NULL)
		return;
	for (step = 0; step < size - 1; step++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}
