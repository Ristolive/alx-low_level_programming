#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
 */

void print_alphabet(void)
{
    int _putchar(int c)
{
    return putchar(c);
}
    char c;
    for (c = 'a'; c <= 'z'; c++) {
        _putchar(c);
    }
    _putchar('\n');
}

int main(void)
{
    print_alphabet();
    return 0;
}

