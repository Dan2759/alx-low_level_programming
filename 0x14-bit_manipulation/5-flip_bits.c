#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to convert n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int count;
	unsigned long int xor_res = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		count = xor_res >> i;
		if (count & 1)
			j++;
	}

	return (j);
}
