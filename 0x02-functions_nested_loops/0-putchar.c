#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int _putchar(int c);
    char str[] = "_putchar";
    int ch;

    for (ch = 0; ch < 8; ++ch) {
        _putchar(str[ch]);
    }

    _putchar('\n');

    return (0);
}

int _putchar(int c)
{
    return putchar(c);
}

