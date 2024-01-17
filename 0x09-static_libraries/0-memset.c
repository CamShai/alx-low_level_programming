#include <stdio.h>
#include "main.h"
/**
 * _memset- fills memory with constant byte
 * @n: number of bytes of memory to be filled
 * @s: pointer to area to be filled
 * @b: constant byte
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
