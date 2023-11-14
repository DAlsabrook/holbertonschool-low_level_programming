#include "main.h"
/**
 *
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);
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
	if (o == -1 || w == -1)
		return (-1);
	return (1);
}
