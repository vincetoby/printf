#include "main.h"

/**
 * custom_s - customized printing of string.
 * @var: argument passed to function.
 * Return: count.
 */

int custom_s(va_list var)
{
	char *str;
	int i, count = 0, husk;

	str = va_arg(var, char *);
	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++) /*iterate over str */
	{
		if (str[i] < 32 || str[i] >= 127) /*ASCII Value of each char in str*/
		{
			_putchar('\\'); /* 1st backslash causes 2nd not to be seen as special */
			_putchar('x');
			count = count + 2; /* increment count by 2 bcus of \ and x */
			husk = str[i];
			if (husk < 16)
			{
				_putchar('0');
				count++;
			}
			count += hexa_convert_s(husk);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
