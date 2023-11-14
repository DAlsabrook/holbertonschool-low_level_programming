#include "main.h"
/**
 *
 *
 *
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
	o = open(filename, O_CREAT, O_RDWR, O_TRUNC);
	w = write(o, text_content, len);
	if ((check(o) + check(w)) < 0)
		return (-1);
	close(o);
	return(w);
}
