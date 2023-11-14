#include "main.h"
char *create_buffer(char *file);
void close_file(int fd);
int error(char s, char *arg, char *buffer);
/**
 * create_buffer - allocates memory for buffer or throw error
 * @file: file for error message
 *
 * Return: the malloced char *
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file - function used to close files or throw an error
 * @fd: file descriptor used when closing
 *
 * Return: void
*/
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * error - function used to print error messages and free
 * @s: string passed in to determine which error
 * @arg: arguments from main used in message
 * @buffer: pointer to the buffer used in main
 *
 * Return: int value used for error reporting
*/
int error(char s, char *arg, char *buffer)
{
	switch (s)
	{
		case 'w':
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
			free(buffer);
			return (99);
		case 'r':
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
			free(buffer);
			return (98);
	}
	return (0);
}
/**
 * main - entry point for the program. Checks for errors with outside
 * functions. Copies content from one file and moves it to a seperate
 * file given in argv
 * @argc: count of args
 * @argv: array storing arguments given
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			exit(error('r', argv[1], buffer));
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			exit(error('w', argv[2], buffer));
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
