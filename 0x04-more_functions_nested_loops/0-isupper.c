#include <stdio.h>
#include "main.h"
/**
 * _isupper - check if char is uppercase
 * @c: to be casechecked
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
