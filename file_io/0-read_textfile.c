#include "main.h"
/**
 * read_textfile - read a file and write to the POSIX
 * @filename: name of file to read
 * @letters: number of letter expected
 *
 * Return: number of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return ((long int)NULL);
	buff = malloc(sizeof(char) * letters + 1);
	if (!buff)
		return (0);
	if ((o = open(filename, O_RDONLY)) == -1)
		return (0);
	if ((r = read(o, buff, letters)) == -1)
		return (0);
	if ((w = write(1, buff, r)) == -1)
		return(0);
	close(o);
	return (w);
}
