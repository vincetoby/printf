#include "main.h"

/**
 * print_string - print a string.
 * @var: variable for argument.
 * Return: string len.
 */

int print_string(va_list var)
{
	char *str;
	int i, len;

	str = va_arg(var, char *);
	if (str == NULL)
		return (-1);
	else
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	return (len);
}
