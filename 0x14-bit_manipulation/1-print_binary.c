#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary number
 */

void print_binary(unsigned long int n)
{

	unsigned long int n_copy = n, msk = 1;
	int len = 0;

	while (n_copy > 0)
	{
		len++;
		n_copy >>= 1;
	}

	len -= 1;

	if (len > 0)
		msk = msk << len;

	while (msk > 0)
	{
		if (n & msk)
			_putchar('1');
		else
			_putchar('0');

		msk >>= 1;
	}
}
