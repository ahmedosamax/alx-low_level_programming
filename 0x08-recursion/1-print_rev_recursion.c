#include "main.h"
/**
 *_print_rev_recursion - function print array reversly
 * @s: the array to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
