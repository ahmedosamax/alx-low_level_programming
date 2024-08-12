#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a file and print
 * @filename: pointer to filename
 * @letters: the no 0f letter
 * Return: 0 if the function failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, s, q;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	s = read(i, buff, letters);
	q = write(STDOUT_FILENO, buff, s);

	if (i == -1 || s == -1 || q == -1 || q != s)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(i);
	return (q);
}
