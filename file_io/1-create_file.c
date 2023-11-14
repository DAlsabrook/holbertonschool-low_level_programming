#include "main.h"
/**
 * create_file - creates a file and puts data in it
 * @filename: name of the file
 * @text_content: text to put in file
 *
 * Return: 1 on success. -1 on error.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
