#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: to be checked if is a digit
 * Return: 1 if digit , 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
