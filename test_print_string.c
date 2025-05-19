#include "main.h"
#include <stdio.h>

int main(void)
{
    int n, o, i, len;

    /* Test 1 */
    n = _printf("Name:%s%c\n", "CHIMOBI", 'c');
    _printf("%d\n", n);
    /**
     * Name:CHIMOBIc
     * 14
     */

    /* Test 2 */
    o = _printf("My name is %s\n", "IFEDI");
    _printf("%d\n", o);
    /**
     * My name is  IFEDI
     * 17
     */

    /* Test 3 */
    i = _printf("Oh %c%c\n", 'h', 'i');
    _printf("%d\n", i);
    /**
     * Oh hi
     * 6
     */
    /* Test integers*/
    len = _printf("%d\n", 123456789);
    _printf("%i\n", len);
    len = _printf("%i\n", 987654321);
    _printf("%d\n", 10001);
    return (0);
}
