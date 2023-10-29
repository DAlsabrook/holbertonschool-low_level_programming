#include "variadic_functions.h"
/**
 * print_all - prints anything passed in
 * @format: list of types of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);
	
    int j;
    char c;
    int i;
    float f;
    char *s;
    int isStringNull;
	
    j = 0;
    while ((c = *format[j]) != '\0') {
        if (c == 'c') {
            i = va_arg(args, int);
            printf("%c ", i);
        }
        if (c == 'i') {
            i = va_arg(args, int);
            printf("%d ", i);
        }
        if (c == 'f') {
            f = (float)va_arg(args, double);
            printf("%f ", f);
        }
        if (c == 's') {
            s = va_arg(args, char*);
            isStringNull = (s == NULL);
            if (isStringNull) {
                printf("(nil) ");
            } else {
                printf("%s ", s);
            }
        }
	j++;
    }

    printf("\n");
    va_end(args);
}
