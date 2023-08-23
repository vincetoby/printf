#include "main.h"

/**
 * print_sym - prints the symbol "%".
 *
 * Return: 1 (Success)
 */

int print_sym(void)
{
	char a = '%';

	write(1, &a, 1);
	return (1);
}
