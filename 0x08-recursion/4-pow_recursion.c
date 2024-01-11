#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion- finds pwer of a number
 * @x: number to be powered
 * @y: exponent
 * Return- 0 if success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
	return (0);
}
