#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to retrieve.
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}
