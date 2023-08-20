#include "main.h"

/**
 * _printf: prints
 * @format: char to print
 * Return: integer
 */

int _printf(const char *format, ...)
{
	int i, j, len = 0;
	va_list args;

	func arr[] = {
	{"%d", print_int}, {"%i", print_int},
	{"%c", print_char}, {"%s", print_string},
	{"%%", print_sym}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0';)
	{
		j = 0;
		while (j < 5)  /* Number of elements in the arr array */
		{
			if (format[i] == arr[j].s[0] && format[i + 1] == arr[j].s[1])
			{
				len += arr[j].ptr(args);
				i = i + 2;
				break;
			}
			j++;
		}
		if (j == 5)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
