#include <stdio.h>
#include <stdarg.h>

// Function to write a single character to the standard output
int _putchar(char c)
{
    return write(1, &c, 1);
}

// Function to print an integer
int print_integer(int num)
{
    int count = 0;
    int temp = num;

    // Handle negative numbers
    if (num < 0)
    {
        count += _putchar('-');
        num = -num;
    }

    int digits = 0;

    // Count the number of digits in the integer
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }

    char buffer[digits];

    // Convert integer digits to characters and store in buffer
    for (int i = digits - 1; i >= 0; i--)
    {
        buffer[i] = '0' + (num % 10);
        num /= 10;
    }

    // Print the digits
    for (int i = 0; i < digits; i++)
    {
        count += _putchar(buffer[i]);
    }

    return count;
}

// Custom printf function
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int count = 0;

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            // Handle conversion specifiers
            switch (*format)
            {
                case 'd':
                case 'i':
                    {
                        int num = va_arg(args, int);
                        count += print_integer(num); // Call the print_integer function
                    }
                    break;
                default:
                    count += _putchar('%');
                    count += _putchar(*format);
                    break;
            }
        }
        else
        {
            count += _putchar(*format);
        }
        format++;
    }

    va_end(args);
    return count;
}

int main()
{
    _printf("The number is %d and %i.\n", 123, -456);
    return 0;
}
