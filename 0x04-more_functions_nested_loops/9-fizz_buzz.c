#include "main.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
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
