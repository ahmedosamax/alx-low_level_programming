#include "main.h"
/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (; i < 8 ; i++)
		_putchar(str[i]);
	_putchar ('\n');
	return (0);
}
