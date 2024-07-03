#include"main.h"
/**
 * string_toupper -  function make all lowercase uppercase
 * @a: the array of numbers
 * Return: the result of comparison
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 91 && a[i] <= 122)
			a[i] -= 32;
		i++;
	}
	return (a);
}
