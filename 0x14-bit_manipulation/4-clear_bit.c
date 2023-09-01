#include "main.h"

/**
 * clear_bit - clear bit to 0 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maximum_bits;
	unsigned long int mask = 1;

	maximum_bits = (sizeof(unsigned long int) * 8);
	if (index > maximum_bits)
		return (-1);

	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
