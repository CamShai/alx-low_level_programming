#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers- prints numbers
 * @separator: string to be printed in  between numbers
 * @n: number of args
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i = 0;

	va_start(print, n);
	while (i < n)
	{
		printf("%d", va_arg(print, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(print);
}
