#include "sort.h"
/**
 *shell_sort - funtion that implements the Shell sort algorithm using Knuth seq
 *@array: array given
 *@size: size of the array
 **/
void shell_sort(int *array, size_t size)
{
	unsigned int inner = 0, h = 1, outer = 0;
	int tmp = 0;

	if (!array || size < 2)
		return;
	while (h <= size / 3)
		h = (h * 3) + 1;
	while (h > 0)
	{
		for (outer = h; outer < size; outer++)
		{
			tmp = array[outer];
			inner = outer;
			while (inner > h - 1 && array[inner - h] >= tmp)
			{
				array[inner] = array[inner - h];
				inner -= h;
			}
			array[inner] = tmp;
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}
}
