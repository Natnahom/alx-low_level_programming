#include "main.h"

/**
 * create_file - creates a file with rw------- permissions
 * @filename: name of the file, if NULL, return -1
 * @text_content: contents of the file. If NULL, create an empty file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, i);

	if (0 == -1 || w == -1)
		return (-1);
	close (o);

	return (1);
}
