/**
 * strlen - Returns the length of a string
 * @format: The string to be calculated
 *
 * Return: The length of @fomart.
 */
int _strlen(const char *format)
{
    int i = 0;

    while (format[i]) {
        i++;
    }
    return (i);
}
