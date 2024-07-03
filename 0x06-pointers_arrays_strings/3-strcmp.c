#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: the array of character
 * @s2: the array of character
 * Return: the result of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sum = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			sum += 0;
		else
		{
			sum = (s1[i] - s2[i]);
			break;
		}
		i++;
	}
	return (sum);
}
