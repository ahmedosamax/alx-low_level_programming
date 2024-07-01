#include"main.h"
/**
 * print_rev - void function print string  in revers in stdo
 * @s: pointer points on 1st character in the string
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i>=0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
