#include "variadic_functions.h"
/**
 * print_all - prints numbers and string given
 * @format: types of argus
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *ptr, *stp = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", stp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", stp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", stp, va_arg(list, double));
					break;
				case 's':
					ptr = va_arg(list, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", stp, ptr);
					break;
				default:
					i++;
					continue;
			}
			stp = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
