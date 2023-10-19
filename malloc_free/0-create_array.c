#include "main.h"
/**
 * create_array - creates array
 * @size: size of array
 * @c: specific char to initializes array
 *
 * Return: char* array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
	return (NULL);
}
