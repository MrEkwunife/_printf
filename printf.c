#include "main.h"
#include <stdarg.h>

// Loop through the format string and get the special characters
// Group all format char into a list/array
// When a special char is found compare with standard fmt specifiers to get the
// equivalent in the variable argument.

/**
 * _strlen - Returns the length of a string.
 *
 * format: The string to be calculated.
 * Return: The length of a string.
 */
int _strlen(const char *format) {
    int i;

    i = 0;
    while (format[i]) {
        i++;
    }
    return i;
}

void handle_format_char(char c, va_list args) {
    char fmt[] = {
        'c', 's', 'S', 'd', 'i', 'b', 'u', 'o', 'x', 'X', 'p', 'l', 'h', 'r', 'R'
    };

    switch (c) {
        case 'c':
            
    }
}

/**
 *
 *
 */
int _printf(const char *format, ...) {
    int i, l;

    l = _strlen(format);
    for (i = 0; i < l; i++) {
        _putchar(format[i]);
    }
    return l;
}
