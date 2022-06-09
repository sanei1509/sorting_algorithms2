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

