#include "main.h"

/**
 * printf_char - print a character.
 * @var: argument.
 * Return: 1 on success.
 */

int print_char(va_list var)
{
	char ch;

	ch = va_arg(var, int);
	_putchar(ch);
	return (1);
}
