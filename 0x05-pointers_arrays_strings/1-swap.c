#include "main.h"
/**
 * swap_int - void function swap the content of 2 variables
 * @a: pointer points on 1st variable to be swaped
 * @b: pointer points on 2st variable to be swaped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
