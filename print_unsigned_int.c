#include "main.h"

/**
 * print_unsigned - prints unsigned integer
 * @var: argument to print
 * Return: count
 */

int print_unsigned_int(va_list var)
{
	/* Extract the unsigned integer argument from va_list */
	unsigned int unsign_num = va_arg(var, unsigned int);
	int count = 1, num, lastnum = unsign_num % 10, digit, pvalue = 1;

	/* Split the number into last digit and remaining digits */
	unsign_num = unsign_num / 10;
	num = unsign_num;

	/* Handle negative sign if last digit is negative */
	if (lastnum < 0)
	{
		_putchar('-'); /* Print negative sign */
		num = -num;
		unsign_num = -unsign_num;
		lastnum = -lastnum;
		count++; /* Increment character count */
	}
	/* print the remaining digits of the number */
	if (num > 0)
	{
		while (num / 10 != 0) /* Calculate place value of leftmost digit */
		{
			pvalue = pvalue * 10;
			num = num / 10;
		}
		num = unsign_num;
		while (pvalue > 0) /* Print each digit one by one */
		{
			digit = num / pvalue;
			_putchar(digit + '0'); /* Print the digit as a character */
			num = num - (digit * pvalue);
			pvalue = pvalue / 10;
			count++; /* Increment character count */
		}
	}
	_putchar(lastnum + '0'); /* Print the last digit */
	return (count);
}
