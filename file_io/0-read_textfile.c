#include "main.h"
/**
 * 
 * 
 * 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	FILE *my_file;

	my_file = open(filename, O_RDONLY);

	for (i = 0; i < letters; i++)
	{

	}

	close(my_file);
}
