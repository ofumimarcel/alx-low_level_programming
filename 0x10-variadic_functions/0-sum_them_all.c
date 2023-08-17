#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum of list of numbers
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numlist;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(numlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numlist, int);
	va_end(numlist);

	return (sum);
}
