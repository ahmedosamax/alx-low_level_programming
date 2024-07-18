#include "main.h"
/**
 * *array_range - allocates memory for an array
 * @min: the number starting the array
 * @max: the number at ending of the array
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int  i, count;
	int *ptr;

	if (min > max)
		return (NULL);
	count = max - min + 1;
	ptr = malloc(sizeof(int) * count);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		ptr[i] = min + i;
	return (ptr);
}
