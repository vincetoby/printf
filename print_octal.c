#include "main.h"

/**
 * print_octal - prints an octal number.
 * @var: arguments passed to print.
 * Return: count on Success.
 */
int print_octal(va_list var)
{
	int *arr;
	int i, count = 0;
	unsigned int numb = va_arg(var, unsigned int);
	unsigned int temp = numb;

	while (numb / 8 != 0)
	{
		numb = numb / 8;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (-1);

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 8; /* array gets the remainder */
		temp = temp / 8; /* gets the result of division */
	}
	for (i = count - 1; i >= 0; i--) /* reverse index */
	{
		_putchar(arr[i] + '0'); /* print it as char */
	}
	free(arr);
	return (count);
}
