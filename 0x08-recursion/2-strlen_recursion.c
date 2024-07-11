#include "main.h"
/**
 * _strlen_recursion - int function calculate the number of character in string
 * @s: pointer points on 1st character in the string
 * Return: counter
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
