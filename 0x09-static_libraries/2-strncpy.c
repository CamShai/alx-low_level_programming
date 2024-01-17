#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies string from source to destination
 *
 * @dest: destination
 * @src: source
 * @n: length
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	return (dest);
}
