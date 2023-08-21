#include "main.h"

/**
 * print_hexadecimal - prints an hexgecimal number.
 * @var: arguments.
 * Return: count.
 */

int print_hexadecimal(va_list var)
{
	int *arr;
	int i, count = 0;
	unsigned int numb = va_arg(var, unsigned int);
	unsigned int temp = numb;

	while (numb / 16 != 0) /* get the length of numb */
	{
		numb = numb / 16;
		count++;
	}
	count++; /* increment because count doesnt get the num less than 16*/
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (-1);

	for (i = 0; i < count; i++) /* loop to get each value of array */
	{
		arr[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--) /* iterating from last number to first */
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39; /* Convert digits greater than 9 to letters A-F */
		_putchar(arr[i] + '0'); /* print as char */
	}
	free(arr);
	return (count);
}
