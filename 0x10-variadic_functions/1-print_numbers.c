#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers plus new line
 * @separator: space character
 * @n: amount of arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i;

	if (n > 0)
	{
		va_start(numlist, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(numlist, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(numlist);
	}
	printf("\n");
}
