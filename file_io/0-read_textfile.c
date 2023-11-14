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
	int file_num;
	ssize_t file;
	char buff[letters];

	file_num = open(filename, O_RDONLY);
	if (file_num == -1)
		return (0);
	file = read(file_num, buff ,letters);
	if (file == -1)
		return (-1);
	if (write(1, buff, file) != file)
		return (-1);

	close(file_num);
	return (file);
}
