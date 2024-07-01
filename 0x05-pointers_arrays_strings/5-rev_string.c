#include"main.h"
/**
 * rev_string - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	j = (i - 1);

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
