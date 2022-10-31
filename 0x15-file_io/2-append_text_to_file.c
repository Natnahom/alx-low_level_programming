#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - appends text to a file
 * @filename: file to append to, if NULL, return -1
 * @text_content: content to append, if NULL, do not append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int app_file, i, wr_stat;

	if (filename == NULL)
		return (-1);
	app_file = open(filename, O_WRONLY | O_APPEND);
	if (app_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i]; i++)
		;
	wr_stat = write(app_file, text_content, i);
	close(app_file);

	return (wr_stat == -1 ? -1 : 1);
}
