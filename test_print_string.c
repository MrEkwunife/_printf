#include "main.h"
#include <stdio.h>

int main(void)
{
    // Test 1
    int n = _printf("Name:%s%c\n", "CHIMOBI", 'c');
    printf("%d\n", n);
    /**
     * Name:CHIMOBIc
     * 14
     */

    // Test 2
    int o = _printf("My name is %s\n", "IFEDI");
    printf("%d\n", o);
    /**
     * My name is  IFEDI
     * 17
     */

    // Test 3
    int i = _printf("Oh %c%c\n", 'h', 'i');
    printf("%d\n", i);
    /**
     * Oh hi
     * 6
     */
    return (0);
}
