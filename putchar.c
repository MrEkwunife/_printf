#include "main.h"

/**
 * _putchar - Writes a 1 byte character to stdout
 *
 * @c: the character to be written
 * Return: The character written
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}
