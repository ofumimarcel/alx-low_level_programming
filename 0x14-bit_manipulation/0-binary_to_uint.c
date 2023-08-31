#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int pw = 1;
	unsigned int sum = 0;
	unsigned int error = 0;

	if (b == NULL)
		return (error);

	while (b[len] != '\0')
		len++;
	len -= 1;

	while (len >= 0)
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (error);

		if (b[len] == '1')
			sum += pw;

		pw *= 2;
		len--;
	}

	return (sum);
}
