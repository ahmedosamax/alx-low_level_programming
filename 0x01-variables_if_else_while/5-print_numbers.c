#include <stdio.h>
/**
 * main - entry point
 * Description: print numbers from 0 to 9
 * Return: (0)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
