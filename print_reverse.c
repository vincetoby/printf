#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @var: arguments
 * Return: count
 */

int print_reverse(va_list var)
{
	char *str = va_arg(var, char *);
	int i, count = 0, j;

	if (str == NULL)
		return (-1);
	for (j = 0; str[j] != '\0'; j++) /* gets length of string */
		count++;

	for (i = j - 1; i >= 0; i--) /* prints from last to first */
		_putchar(str[i]);
	return (count);
}
