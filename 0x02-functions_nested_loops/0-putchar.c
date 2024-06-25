#include "main.h"
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (; i < 8 ; i++)
		_putchar(str[i]);
	_putchar ('\n');
	return (0);
}
