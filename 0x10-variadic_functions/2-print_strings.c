#include "variadic_functions.h"
/**
 * print_strings - prints string given
 * @separator: the separator between strings
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char *);
		if (!ptr)
			ptr = "(nil)";
		if (!separator)
			printf("%s", ptr);
		else if (separator && i == 0)
			printf("%s", ptr);
		else
			printf("%s%s", separator, ptr);
	}

	printf("\n");

	va_end(list);
}
