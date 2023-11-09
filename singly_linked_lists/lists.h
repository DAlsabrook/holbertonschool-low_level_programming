#ifndef LINKED
#define LINKED
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - struct for list
 *
 * @str: string
 * @len: length of string
 * @next: pointer to next node
 */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
