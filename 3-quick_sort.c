#include "sort.h"
/**
 *
 *
 **/
void change_position(int *array, int *number1, int *number2, size_t size)
{
	int exchange_position = *number1;

	*number1 = *number2;
	*number2 = exchange_position;
	print_array(array, size);
}
/**
 *
 *
 **/
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int Index = start;
	int i = 0;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			if (Index != i)
			{
				change_position(array, &array[i], &array[Index], size);
			}
			Index++;
		}
	}
	if (Index != end)
		change_position(array, &array[end], &array[Index], size);
	return Index;
}
/**
 *
 *
 **/
void quickSort(int *array, int low, int high, size_t size)
{
	int pi = 0;

	if(low < high)
	{
		pi = partition(array, low, high, size);
		quickSort(array, low, pi - 1, size);
		quickSort(array, pi + 1, high, size);
	}
}
/**
 *
 *
 **/
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
