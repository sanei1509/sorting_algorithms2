#include "sort.h"
/**
 *
 *
 **/
void change_position(int *number1, int *number2)
{
	int exchange_position = 0;

	exchange_position = *number1;
	*number1 = *number2;
	*number2 = exchange_position;
}

/**
 *
 *
 **/
int partition(int *array, int start, int end)
{
	int pivot = array[end];
	int Index = start;
	int i = 0;

	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			change_position(&array[i], &array[Index]);
			Index++;
		}
	}
	change_position(&array[end], &array[Index]);
	return Index;
}
/**
 *
 *
 **/
void quickSort(int *array, int start, int end)
{
	int pi = 0;

	if(start < end)
	{
		pi = partition(array, start, end);
		quickSort(array, start, pi - 1);
		quickSort(array, pi + 1, end);
	}
}
/**
 *
 *
 **/
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1);
	print_array(array, size);
}
