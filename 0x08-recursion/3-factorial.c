#include <stdio.h>
#include "main.h"
/**
 * factorial - finds factorial
 * @n: target 
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
	return (0);
}
