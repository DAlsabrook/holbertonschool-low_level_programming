#ifndef LINKED
#define LINKED

typdef struct list_s{
	char *str;
	int len;
	struct list_s* next;
} list_t;

size_t print_list(const list_t *h);

#endif