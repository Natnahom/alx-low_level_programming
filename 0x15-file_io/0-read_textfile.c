#include "main.h"

/**
 * read_textfile - reads the text file
 * @filename: character
 * @letters: size
 *
 * Return: 0 or filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == -1)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);

	return (w);
}
