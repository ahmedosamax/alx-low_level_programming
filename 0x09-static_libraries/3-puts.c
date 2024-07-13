#include"main.h"
/**
 * _puts - void function print string in stdo
 * @str: pointer points on 1st character in the string
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
