#include "main.h"
/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("fizzbuzz");
			putchar(' ');
		}
		else if (n % 3 == 0)
		{
			printf("fizz");
			putchar(' ');
		}
		else if (n % 5 == 0)
		{
			printf("buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", n);
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
