#include "main.h"

/**
 * print_integer - prints int
 * @num:int to print
 * Return: int
 */

int print_integer(int num)
{
	int count = 0, i, j;
	int temp = num, digit = 0;
	char *buffer, a = '-'; 

	/* handles negative numbers */
	if (num < 0)
	{
		write(1, &a, 1);
		count++;
		num = -num;
	}
	/* to get the number of digits in num */
	while (temp != 0)
	{
		temp = temp / 10;
		digit++;
	}
	buffer = malloc(sizeof(char) * digit);/* an array to hold char */
	if (buffer == NULL)
		return (-1);
	/* convert int to char and store in buffer */
	for (i = digit - 1; i >= 0; i--)
	{
		buffer[i] = '0' + (num % 10);
		num = num / 10;
	}
	for (j = 0; j < digit; j++)
	{
		write(1, &buffer[j], 1);
		count++;
	}
	free(buffer);
	return (count);
}

/**
 * print_int - prints integers as printf
 * @var: format string
 * Return: an integer
 */

/* my printf function */
int print_int(va_list var)
{
	int num, count;

	num = va_arg(var, int);
	count = print_integer(num);
	return (count);
}
