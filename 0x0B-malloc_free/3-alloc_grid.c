#include "main.h"
/**
 * **alloc_grid - make 2 dimension array
 * @width: the row of array
 * @height: the height of array
 * Return: array 2 dimensioned
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(width * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(height * sizeof(int *));
		if (ptr == NULL)
			return (NULL);
		for (j = 0 ; j < height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
