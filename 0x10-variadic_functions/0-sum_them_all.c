#include "variadic_functions.h"
/**
 * sum_them_all - sum all the arguments
 * @n: argument counters
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptrN;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ptrN, n);
	for (i = 0; i < n ; i++)
	{
		sum += va_arg(ptrN, int);
	}
	va_end(ptrN);
	return (sum);
}
