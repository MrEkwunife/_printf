#include "main.h"

/**
 * _printf - prints formatted string to stdout
 * @format: the format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i, count = 0;

    va_start(args, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 's')
            {
                count += print_string(args);
            }
            else if (format[i] == 'c')
            {
                char c = va_arg(args, int);
                _putchar(c);
                count++;
            }
            else if (format[i] == '%')
            {
                _putchar('%');
                count++;
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
    }

    va_end(args);
    return (count);
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
    int count = 0;

    while (*str)
    {
        _putchar(*str++);
        count++;
    }

    return count;
}



