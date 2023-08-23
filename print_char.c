#include "main.h"

/**
 * print_char - prints character to sdout.
 * @var: argument.
 * Return: 1 on success.
 */

int print_char(va_list var)
{
	char ch;

	ch = va_arg(var, int);
	write(1, &ch, 1);
	return (1);
}
