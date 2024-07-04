#include "main.h"
/**
 * leet - encodes a string in rot 13
 * @a: string to be encoded
 *
 * Return: the resulting string;
 */
char *rot13(char *a)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == input[j])
			{
				a[i] = output[j];
				break;
			}
		}
	}
	return (a);
}
