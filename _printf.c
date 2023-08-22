#include "main.h"

/**
 * _printf - prints characters, symbols, strings, etc.
 * @format: char to print
 * Return: integer
 */

int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list args;

	func arr[] = {
	{"%d", print_int}, {"%i", print_int}, {"%X", print_HEXADECIMAL},
	{"%c", print_char}, {"%s", print_string}, {"%x", print_hexadecimal},
	{"%%", print_sym}, {"%b", print_binary}, {"%o", print_octal},
	{"%u", print_unsigned_int}, {"%p", print_p}, {"%S", custom_s},
	{"%k", print_reverse}, {"%R", print_rot13}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0';)
	{
		j = 0;
		while (j < 14)  /* Number of elements in the arr array */
		{
			if (format[i] == arr[j].s[0] && format[i + 1] == arr[j].s[1])
			{
				count += arr[j].ptr(args);
				i = i + 2;
				break;
			}
			j++;
		}
		if (j == 14)
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
