#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function as a parameter
 * on each element of an array
 *
 * @array: : This parameter is an array of values that will be passed to the function pointed to by the @action parameter.
 *
 * @size: This parameter specifies the size or length of the array
 *
 * @action: This parameter is a pointer to a function that will be executed on each
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
