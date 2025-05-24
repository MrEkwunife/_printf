#include "main.h"

/**
 * handle_format_specifier - Handles the logic to parse each format specifier.
 *
 * @c: The character to indicate the format specifier
 * @args: The variable argument
 *
 * Return: Nothing
*/
int handle_format_specifier(char c, va_list args)
{
    switch (c) {
        case 'c':
            return(print_character(args));
        case 's':
            return(print_string(args));
        case 'd':
            return(print_integer(args));
        case 'i':
            return(print_integer(args));
        default:
            return (1);
    }
}

/**
 * print_string - prints a string
 * @args: va_list containing the string
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int i = 0;

    while (*str)
    {
        _putchar(*str++);
        i++;
    }
    return (i);
}


/**
 * print_character - prints a format type of char
 * @args: should point to char to be printed
 *
 * Return: Always 1
 */
int print_character(va_list args)
{
    char arg = va_arg(args, int);
    _putchar(arg);
    return (1);
}

int print_integer(va_list args)
{
    int arg, count;

    arg = va_arg(args, int);
    count = print_integer_digits(arg);

    return (count);
}
