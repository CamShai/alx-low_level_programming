#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion- finds square root
 * @n: number
 * Return - 1 if success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_support(n, 0));
}
/**
 * _sqrt_support - supports by recursing through roots
 * @number: n
 * @root: possible root
 * Return - 1 if success
 */
int _sqrt_support(int number, int root)
{
	if (root * root == number)
		return (root);
	else if (root * root > number)
		return (-1);
	else
		return (_sqrt_support(number, root + 1));
}
