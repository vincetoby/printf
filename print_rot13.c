#include "main.h"

/**
 * print_rot13 - prints str to ROT13 place into buffer
 * @var: arguments
 * Return: count
 */

int print_rot13(va_list var)
{
	int i, j, count = 0;/*count keeps track of strlength*/

	char *num = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char *rotnum = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	char *str = va_arg(var, char *);

	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++) /* iterate through str */
	{
		for (j = 0; num[j] != '\0'; j++) /* itera through num */
		{
			if (str[i] == num[j])
			{
				_putchar(rotnum[j]); /* print rotnum at same index */
				count++;
				break; /* exit innermost for loop */
			}
		}
		if (num[j] == '\0') /*if no match was found, print str as it is */
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
