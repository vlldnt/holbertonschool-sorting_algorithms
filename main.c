#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

void main(int)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t size = 10;
	size_t i;
	int temp;

	for (i = 0; i < size - 1; i++)
       	{
                {
			if (array[i + 1] < array[i])
			{
                       		temp = array[i + 1];
                        	array[i + 1] = array[i];
                       	 	array[i] = temp;
			}
                }
        print_array(array, size);		
        }
}
