#include "main.h"
/**
 * append_text_to_file - append text to a file
 * @filename: name of file to append
 * @text_content: text to append on the end of file
 *
 * Return: 1 on success. -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o = 0, w = 0, len = 0;

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
	}
	if (filename)
	{
		o = open(filename, O_WRONLY | O_APPEND);
		w = write(o, text_content, len);
	}
	if (!filename || o == -1 || w == -1)
		return (-1);
	return (1);
}
