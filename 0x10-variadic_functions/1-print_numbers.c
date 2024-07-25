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

	if (n == 0)
		return;
	va_start(ptrN, n);
	for (i = 0; i < n ; i++)
	{
		if (!separator)
			printf("%d", va_arg(ptrN, int));
		if (separator && i > 0)
			printf("%s %d", separator, va_arg(ptrN, int));
		else if (separator && i == 0)
			printf("%d", va_arg(ptrN, int));
	}
	printf("\n");
	va_end(ptrN);
}
