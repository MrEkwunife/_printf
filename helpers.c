#include "main.h"

/**
 * handle_format_specifier - Handles the logic to parse each format specifier.
 *
 * @c: The character to indicate the format specifier
 * @args: The variable argument
 *
 * Return: Nothing
*/
void handle_format_specifier(char c, va_list args)
{    
    switch (c) {
        case 'c':
            print_character(args);
            break;
        case 's':
            print_string(args);
            break;
    }
}
