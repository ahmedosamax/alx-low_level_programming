#include "variadic_functions.h"
/**
 * print_numbers - print the argus
 * @separator: the character separate the argus
 * @n: the argus
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptrN;
	unsigned int i;

	if (!separator || n == 0)
		return;
	va_start(ptrN, n);
	for (i = 0; i < n ; i++)
	{
		if (i > 0)
			printf("%s ", separator);
		printf("%d", va_arg(ptrN, int));
	}
	printf("\n");
	va_end(ptrN);
}
