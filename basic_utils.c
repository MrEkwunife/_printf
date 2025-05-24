#include "main.h"
#include <stdio.h>

/**
 * get_integer_digit - This function prints each digits in a number to stdout.
 *
 * @number: The number to be worked on.
 * Return: The number of digits in the number.
 */
int print_integer_digits(int number)
{
    int div, temp, inc = 1, count = 0;

    if (number < 0)
        return (0);

    temp = number;
    temp /= 10;
    while (temp > 0)
    {
        temp /= 10;
        inc *= 10;
    }

    while (inc > 0)
    {
        div = number / inc;
        number %= inc;
        _putchar(div + '0');
        count += 1;

        inc /= 10;
    }

    return (count);
}
