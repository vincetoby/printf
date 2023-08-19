#include "main.h"
int _printf(const char *format, ...)
{
	int totalchar = 0, count;
	char ch, *str;
	va_list var;

	if (!format)
		return (-1);
	va_start(var, format);
	while (*format)
	{
		if (*format != '%')
			totalchar += write(1, format++, 1);
		else
		{
			format++;
			if (*format == 'c')
				totalchar += write(1, &(ch = va_arg(var, int)), 1);
			else if (*format == 's')
			{
				str = va_arg(var, char *);
				count = strlen(str);
				totalchar += write(1, str, count);
			}
			else if (*format == '%')
				totalchar += write(1, format++, 1);
		}
	}
	va_end(var);
	return (totalchar);
}
