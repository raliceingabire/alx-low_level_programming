#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * size : the size of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size  == 0 || arrray == NULL)
		return;

	for (i = 0; i < size; i++)
	
		action(array[i]);
}
