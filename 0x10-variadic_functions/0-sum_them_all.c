#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all- sums integers
 * @n: number of arguments
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
	va_list add;
	unsigned int i;
	int s = 0;

	va_start(add, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(add, int);

		s += x;
	}
	va_end(add);

	return (s);
	}
	else
		return (0);
}
