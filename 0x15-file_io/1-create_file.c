#include "main.h"

/**
 * create_file - create file.
 * @filename: pointer to filename
 * @text_content: pointer to string
 * Return: -1 if f fails
 */
int create_file(const char *filename, char *text_content)
{
	int i, s, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(i, text_content, l);

	if (i == -1 || s == -1)
		return (-1);

	close(i);

	return (1);
}
