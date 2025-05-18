#ifndef MAIN_H
#define MAIN_H

/* Standard Library headers */
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *format);
int print_string(va_list args);
int print_character(va_list args);
int print_integer(va_list args);
int handle_format_specifier(char c, va_list args);
int get_integer_digits(int number);

#endif
