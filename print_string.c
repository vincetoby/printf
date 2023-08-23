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

	/* initialization of string to char */
	str = va_arg(var, char *);
	if (str == NULL)
		return (-1);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		write(1, &str[i], 1);
	}
	return (len);
}
