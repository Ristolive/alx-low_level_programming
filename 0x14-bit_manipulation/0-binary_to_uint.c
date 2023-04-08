#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int c;

	c = 0;
	if (!b)
		return (0);
	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		c <<= 1;
		if (b[n] == '1')
			c += 1;
	}
	return (c);
}
