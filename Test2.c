#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c': count += _putchar(va_arg(args, int)); break;
                case 's': for (char *str = va_arg(args, char *); *str; count += _putchar(*str++)); break;
                case 'd': case 'i': count += print_integer(va_arg(args, int)); break;
                case '%': count += _putchar('%'); break;
                default: count += _putchar('%') + _putchar(*format); break;
            }
        }
        else
        {
            count += _putchar(*format);
        }
        format++;
    }

    va_end(args);
    return count;
}
