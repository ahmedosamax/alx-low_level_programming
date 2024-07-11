#include "main.h"
/**
 * _pow_recursion - int function calculate the power
 * @x: the number to be powered
 * @y: the power of x
 * Return: power of number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
