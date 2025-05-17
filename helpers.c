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
    char specs[] = {'c', 's', 'd', 'i', 'b', 'u', 'o', 'x', 'X', 'S', 'p', 'r', 'R'};
    
    switch (c) {
        case 'c':
            print_character(args);
            return;
        case 's':
            print_string(args);
            return;
    }
}
