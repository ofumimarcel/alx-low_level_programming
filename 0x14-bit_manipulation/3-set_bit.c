#include "main.h"

/**
 * set_bit - set bit to 1
 * @n: number
 * @index: index
 * Return: 1 if success, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maximum_bits;
	unsigned long int mask = 1;

	maximum_bits = (sizeof(unsigned long int) * 8);
	if (index > maximum_bits)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
