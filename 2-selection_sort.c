#include "sort.h"
/**
*selection_sort - sort and array in ascending order
*@array: array of elements
*@size: size of array
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, x = 0;
	int aux = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		x = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[x])
				x = j;
		}
		if (x != i)
		{
			aux = array[i];
			array[i] = array[x];
			array[x] = aux;
			print_array(array, size);
		}
	}
}
