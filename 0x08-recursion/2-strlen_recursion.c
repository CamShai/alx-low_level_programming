#include "main.h"
/**
 * _strlen_recursion- counts string length
 * @s: string to be reversed
 * Return- 1 if success
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
				}
