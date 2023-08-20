#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_integer(int num);
int print_sym(void);
int print_int(va_list var);
int print_char(va_list var);
int print_string(va_list var);


typedef struct
{
    const char *s;
    int (*ptr)();
} func;

#endif
