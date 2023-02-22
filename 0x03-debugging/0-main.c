#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - prints if integer is positive or negative
 * @i: the integer to check
 *
 * Return: void
 */
void positive_or_negative(int i)
{
    if (i > 0)
        printf("%d is positive\n", i);
    else if (i < 0)
        printf("%d is negative\n", i);
    else
        printf("%d is zero\n", i);
}

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
    int i;

    i = 98;
    positive_or_negative(i);

    return (0);
}

