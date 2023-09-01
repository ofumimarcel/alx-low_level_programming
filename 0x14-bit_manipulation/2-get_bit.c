#include "main.h"

/**
 * get_bit - get bit
 * @n: number
 * @index: index
 * Return: bit 0 or 1, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int maximum_bits;

	maximum_bits = (sizeof(unsigned long int) * 8);
	if (index > maximum_bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
