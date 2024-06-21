#include <stdio.h>
/**
 * main - entry point
 * Description: print numbers from 0 to 9
 * Return: (0)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
		putchar('0' + num);

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
