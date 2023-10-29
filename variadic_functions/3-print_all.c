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

    char c;
    int i;
    float f;
    char *s;
    int isStringNull;

    while ((c = *format++) != '\0') {
        if (c == 'c') {
            i = va_arg(args, int);
            printf("%c ");
        }
        if (c == 'i') {
            i = va_arg(args, int);
            printf("%d ");
        }
        if (c == 'f') {
            f = (float)va_arg(args, double);
            printf("%f ");
        }
        if (c == 's') {
            s = va_arg(args, char*);
            isStringNull = (s == NULL);
            if (isStringNull) {
                printf("(nil) ");
            } else {
                printf("%s ");
            }
        }
    }

    printf("\n");
    va_end(args);
}
