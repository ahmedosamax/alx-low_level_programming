#include "3-calc.h"
/**
 * main - entry point for the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if Success
 */
int main(int argc, char **argv)
{
	int x, y, res;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (argv[2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (y == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = op(x, y);
	printf("%d\n", res);
	return (0);
}
