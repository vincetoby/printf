#include "main.h"

/**
 * print_p - prints Memory address.
 * @var: argument to function.
 * Return: count on Success.
 */

int print_p(va_list var)
{
	void *ptr;
	long int p;
	int hex, count = 0;
	char prefix1 = '0', prefix2 = 'x';

	ptr = va_arg(var, void *);
	if (ptr == NULL)
		return (-1);

	/* p holds the converted unsigned long int of ptr */
	/* converted to unsigned long so that i can convert to hexa */
	/* printed '0x' before the conversion, 0x represents hexadecimals */
	p = (unsigned long int)ptr;
	write(1, &prefix1, 1);
	write(1, &prefix2, 1);
	count = count + 2;

/* hex(int) stores the number of elements after the print_hexa function */
/* is executed */
	hex = hexa_convert(p);
	count = count + hex;
	return (count);
}
