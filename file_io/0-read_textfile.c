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
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if ((check(o) + check(r) + check(w)) < 0)
		return (0);
	close(o);
	return (w);
}
/**
 * check - checks for errors
 * @var: variable passed in
 *
 * Return: -1 when error found. 0 when no error.
 */
int check(int var)
{
	if (var == -1)
		return (-1);
	return (0);
}
