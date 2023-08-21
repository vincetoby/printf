#include "main.h"

/**
 * print_binary - Print the binaryof a number.
 * @var: Arguments.
 * Return: digit count.
 */

int print_binary(va_list var)
{
	int flagbit = 0; /* Flag to track if a non-zero digit has been encountered */
	int digitCount = 0; /* Counter for printed digits */
	int i, bitMask = 1, binaryDigit;

	/* Extract the number from the arguments */
	unsigned int num = va_arg(var, unsigned int);
	unsigned int currentBit;

	for (i = 0; i < 32; i++) /* iterates through bit */
	{
		currentBit = ((bitMask << (31 - i)) & num);
		/* Calculates the value of the current bit using a bitmask */
		if (currentBit >> (31 - i)) /*checks if current bit is not non-zero */
			flagbit = 1; /* 1 means non-zero, 0 otherwise */
		if (flagbit != 0)
		{
			/* Calculate the individual binary digit (0 or 1) */
			binaryDigit = currentBit >> (31 - i);
			/* print the binary dgits as a character ('0' or '1') */
			_putchar(binaryDigit + '0');
			digitCount++; /* Increment the count */
		}
	}
	if (!digitCount) /* if it is zero */
	{
		_putchar('0');
		digitCount++;
	}
	return (digitCount);
}
