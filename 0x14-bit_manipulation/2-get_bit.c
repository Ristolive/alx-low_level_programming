#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: number
 * @index: index
 *
 * Return: bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (n == 0 && index < 64)
		return (0);

	for (c = 0; c <= 63; n >>= 1, c++)
	{
		if (index == c)
		{
			return (n & 1);
		}
	}

	return (-1);
}
