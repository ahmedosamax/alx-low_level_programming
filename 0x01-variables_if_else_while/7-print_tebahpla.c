#include <stdio.h>
/**
 * main - entry point
 * Description: print numbers from 0 to 9
 * Return: (0)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
