#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings-prints strings
 * @separator: separates strings
 * @n: number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list str;
	char *ptr;

	va_start(str, n);
	while (i < n)
	{
		ptr = va_arg(str, char *);
		printf("%s", ptr ? ptr : "(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(str);
}
