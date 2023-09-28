#include "sort.h"

/**
 * bubble_sort - sorts an arry of integers in ascending order.
 * @array: An aray of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	int swapped;

	for (size_t i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				swapped = 1;
			}
		}

		if (!swapped)
		{
			break;
		}

		for (size_t k = 0; k < size; k++)
		{
			printf("%d ", array[k]);
		}
		printf("\n");
	}
}
