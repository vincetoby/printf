#include "main.h"

/**
 * _printf - prints characters, string
 * @format: String
 * Return: -1 on error, number of characters on success
 */

int _printf(const char *format, ...)
{
	int totalchar = 0, i, count = 0;
	char ch, *str;
	va_list var;

	if (format == NULL)
		return (-1);
	va_start(var, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			totalchar++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
				ch = va_arg(var, int);
				write(1, &ch, 1);
				totalchar++;
			if (*format == 's')
			{
				str = va_arg(var, char *);
				for (i = 0; str[i] != '\0'; i++)
					count++;
				write(1, str, count);
				totalchar = totalchar + count;
			}
			if (*format == '%')
				write(1, format, 1);
				totalchar++;
		}
		format++;
	}
	va_end(var);
	return (totalchar);
}
