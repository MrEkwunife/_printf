#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints formatted string to stdout
 *
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i;

    va_start(args, format);
    for (i = 0; i < _strlen(format); i++)
    {
        if (format[i] == '%' && format[i+1] == 'c')
            _call_to_void_function_that_prints_a_char;
        else if (format[i] == '%' && format[i+1] == 's')
            _call_to_void_function_that_prints_a_string;
        else if (format[i] == '%' && format[i + 1] == '%')
            print('%')

    }
    print("\n")
}

/**
 * print_string - prints string
 * @string to be printed
 *
 * Return: nothing
 */
void print_string(va_list string)
{
    char *local_string = va_arg(string, char*);

    while (*local_string)
    {
        _putchar(*local_string);
        local_string++;
    }
}
