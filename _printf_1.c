#include "main.h"

/**
 * _printf - prints characters, string
 * @format: String
 * Return: -1 on error, number of characters on success
 */

int _printf(const char *format, ...)
{
	int totalchar = 0, count; /* totalchar: monitors len of printf string */
	char ch, *str;
	va_list var;

	if (format == NULL)
		return (-1);
	va_start(var, format);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			totalchar++;
		}
		else
		{
			format++;
			if (*format == '\0') /* end program if a null byte is encountered */
				break;
			if (*format == 'c')
			{
				ch = va_arg(var, int); /* ch copies content of va_arg at that index */
				write(1, &ch, 1);
				totalchar++;
			}
			if (*format == 's')
			{
				str = va_arg(var, char *); /* str copies va_arg */
				count = strlen(str);
				write(1, str, count); /* 1: stdout, str: what to print, count: bytes */
				totalchar = totalchar + count;
			}
			if (*format == '%')
				totalchar += write(1, format++, 1); /* i tried to shorten the code */
		}
	}
	va_end(var);
	return (totalchar);
}
