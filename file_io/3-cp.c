#include "main.h"
char *create_buffer(char *file);
void close_file(int fd);
int error(char s, char *arg, char *buffer);
/**
 * 
 * 
 * 
 * 
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * 
 * 
 * 
 * 
*/
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", fd);
		exit(98);
	}
}
/**
 * 
 * 
 * 
 * 
 * 
*/
int error(char s, char *arg, char *buffer)
{
	switch (s)
	{
		case 'w':
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
			free(buffer);
			return (99);
			break;
		case 'r':
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
			free(buffer);
			return (98);
			break;
	}
	return (0);
}
/**
 * 
 * 
 * 
 * 
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

	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
