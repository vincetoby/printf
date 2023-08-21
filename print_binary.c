#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_binary - Prints unsigned (int) in binary.
 * @num: arguments passed to function.
 *
 * Description: This function takes an unsigned integer as input and prints
 * its binary representation.
 */

void print_binary(unsigned int num)
{

/**
 * my_printf - Custom printf function with binary conversion support.
 * @format: The format string containing conversion specifiers.
 * @...: Additional arguments to be formatted and printed.
 *
 */

	if (num > 1)
	{
		print_binary(num / 2);
	}
	putchar('0' + num % 2);
}

int my_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	for (const char *c = format; *c != '\0'; c++)
	{
		if (*c == '%')
		{
			c++;
			/* Handle the custom conversion specifier %b */
		if (*c == 'b')
		{
			unsigned int num = va_arg(args, unsigned int);

			print_binary(num);
			count += sizeof(unsigned int) * 8;  /* Number of binary digits */
		}
		else
		{
			putchar('%');  /* Print % character */
			count++;
			putchar(*c);   /* Print the character following % */
			count++;
		}
		}
		else
		{
			putchar(*c);
			count++;
		}
	}

	va_end(args);
	return (count);
}

/**
 * main - Entry point of the program.
 *
 * Description: The main function serves as the entry point of the program.
 *
 * Returns: Always 0 (Success).
 */

int main(void)
{
	unsigned int value = 42;

	my_printf("Binary representation of %u: %b\n", value, value);
	return (0);
}
