#include "main.h"
/**
 * flip_bits - change number.
 * @n: number
 * @m: other number
 *
 * Return: number of bits you would need to flip to get from one number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int c, i;

	c = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			c++;
		result <<= 1;
	}

	return (c);
}
