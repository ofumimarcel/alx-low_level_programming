#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints some strings
 * @separator: space character
 * @n: amount of args in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(strlist, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(strlist, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(strlist);
	}
	printf("\n");
}
