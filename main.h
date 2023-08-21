#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_integer(int num);
int print_sym(void);
int print_int(va_list var);
int print_char(va_list var);
int print_string(va_list var);
int print_binary(va_list var);
int print_unsigned_int(va_list var);
int print_integer1(unsigned int num);
int print_octal(va_list var);
int print_hexadecimal(va_list var);
int print_HEXADECIMAL(va_list var);
int print_p(va_list var);
int hexa_convert(unsigned long int nuimb);
int hexa_convert_s(unsigned int numb);
int custom_s(va_list var);
int print_reverse(va_list var);
int print_rot13(va_list var);

typedef struct
{
    const char *s;
    int (*ptr)();
} func;

#endif
