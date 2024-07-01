#include "main.h"
/**
 *  puts_half - prints the second have of the string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;
	j = (i / 2);

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	if (i % 2 !=  0)
		_putchar(str[(i - 1) / 2]);
	_putchar('\n');
}
