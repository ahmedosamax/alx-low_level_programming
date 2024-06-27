#include "main.h"

int main()
{
	int n;

	for (n = 1; n <= 100; n++)
		{
			if (n%3 == 0 && n%5 == 0)
			{
				printf("fizzbuzz");
				putchar('\n');
			}
			else if (n%3 == 0)
			{
				printf("fizz");
				putchar('\n');
			}
			else if (n%5 == 0)
			{
				printf("buzz");
				putchar('\n');
			}
			else
			{
				printf("%d",n);
				putchar('\n');
			}
			
		}
	putchar('\n');
	return(0);
}
