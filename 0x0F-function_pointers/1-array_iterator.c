#include "function_pointers.h"
/**
 * array_iterator - executes a function given as par on array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to the function we need to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!size || array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
