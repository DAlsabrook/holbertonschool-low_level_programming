#ifndef LINKED
#define LINKED
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
