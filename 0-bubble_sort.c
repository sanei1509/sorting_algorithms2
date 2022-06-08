#include "sort.h"
/**
 *bubble_sort - function that implements the bubble sort algorithm
 *@array: array of numbers type int
 *@size: size of the array
 **/
void bubble_sort(int *array, size_t size)
{
	unsigned int j = 0;
	unsigned int x = 0;
	unsigned int swap = 0;

	if (size < 2)
	{
		return;
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (j = 0; j < size - x - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap = array[j];
					array[j] = array[j + 1];
					array[j + 1] = swap;
					print_array(array, size);
				}
				else
				{
					continue;
				}
			}
		}
	}
}
