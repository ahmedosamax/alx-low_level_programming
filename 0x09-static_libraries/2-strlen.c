#include"main.h"
/**
 * _strlen - int function calculate the number of character in string
 * @s: pointer points on 1st character in the string
 * Return: counter
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
