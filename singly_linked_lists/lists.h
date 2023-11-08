#ifndef LINKED
#define LINKED
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct list_s{
	char *str;
	int len;
	struct list_s* next;
} list_t;

size_t print_list(const list_t *h);

#endif
