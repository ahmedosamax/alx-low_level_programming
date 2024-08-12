#include "main.h"

/**
 * append_text_to_file - append text.
 * @filename: pointer to filename.
 * @text_content: string at end of file.
 * Return: -1 if the function fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, s, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	s = write(i, text_content, l);

	if (i == -1 || s == -1)
		return (-1);

	close(i);

	return (1);
}
