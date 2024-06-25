#include "main.h"
/**
 * main entry point of the program
 * it prints _putchar
 * return (0)
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
