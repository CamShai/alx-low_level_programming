#include "main.h"
#include <stdio.h>
/**
 * factorial - finds factorial
 * @n: number
 * Return- 1 if success
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
			}
