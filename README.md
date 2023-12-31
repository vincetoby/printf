# READ ME

This readme file explains this printf repository

# INTRODUCTION 

This is a team project by Vincent and Tobi is a custom made printf function written 100% in C, called _printf. 
The function is optimized to take various inputs and optional arguments exactly the way standard library function printf works. In this case we can say we built our own printf. This project is the first team project for cohort 17, ALX Software Engineering program. 

Tasks that directed us are listed below:

## **FILES**

1. **_printf_1.c:**

a function that produces output according to a format.

    * Prototype: int _printf(const char *format, ...);
    * Returns: the number of characters printed (excluding the null byte used to end output to strings)
    * write output to stdout, the standard output stream
    * format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. 
<pre><code>You need to handle the following conversion specifiers:
        c
        s
        %
</pre></code>
    * You don’t have to reproduce the buffer handling of the C library printf function
    * You don’t have to handle the flag characters
    * You don’t have to handle field width
    * You don’t have to handle precision
    * You don’t have to handle the length modifiers

2. Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary 

3. Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

4. Use a local buffer of 1024 chars in order to call write as little as possible.

5. Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

6. Handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

7. Handle the following flag characters for non-custom conversion specifiers:

+
space
#

8. Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X

9. Handle the field width for non-custom conversion specifiers.

10. Handle the precision for non-custom conversion specifiers.

11. Handle the 0 flag character for non-custom conversion specifiers.

12. Handle the - flag character for non-custom conversion specifiers.

13. Handle the following custom conversion specifier:

r : prints the reversed string

14. Handle the following custom conversion specifier:

R: prints the rot13'ed string
