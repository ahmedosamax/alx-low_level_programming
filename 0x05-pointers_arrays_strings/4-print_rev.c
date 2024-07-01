#include"main.h"
/**
 * print_rev - void function print string  in revers in stdo
 * @s: pointer points on 1st character in the string
 * Return: 0
 */
void print_rev(char *s)
{
	long int v = (long int)s;

	while (*s != '\0')
	{
		s++;
	}
	while ((long int)v <= (long int)s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
