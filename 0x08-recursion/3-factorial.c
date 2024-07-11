#include "main.h"
/**
 * factorial - int function calculate the factorial
 * @n: the number to be factorialed
 * Return: factorial of number
 */
int factorial(int n)
	{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
	}
