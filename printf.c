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
            count += handle_format_specifier(format[i], args);
            continue;
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
