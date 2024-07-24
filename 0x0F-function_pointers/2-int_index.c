#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to the function we need to execute
 * Return: index of int we were searching for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!size || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
