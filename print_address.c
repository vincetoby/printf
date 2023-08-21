#include "main.h"

/**
 * print_p - prints Memory address
 * @var: argument
 * Return: count
 */

int print_p(va_list var)
{
	void *ptr;
	long int p;
	int hex, count = 0;

	ptr = va_arg(var, void *);
	if (ptr == NULL)
		return (-1);

	/* p holds the converted unsigned long int of ptr */
	/* converted to unsigned long so that i can convert to hexa */
	/* printed '0x' before the conversion, 0x represents hexadecimals */
	p = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	count++;

/* hex(int) stores the number of elements after the print_hexa function */
/* is executed */
	hex = hexa_convert(p);
	count = count + hex;
	return (count);
}
