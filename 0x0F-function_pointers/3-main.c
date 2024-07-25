#include "3-calc.h"
/**
 * main - entry point for the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if Success
 */
int main(int argc, char *argv[])
{
	int i, j, res;
	char c;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = ptr(i, j);

	printf("%d\n", res);

	return (0);
}
