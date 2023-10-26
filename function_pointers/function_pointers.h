#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void print_name(char *name, void (*f)(char *));

#endif
