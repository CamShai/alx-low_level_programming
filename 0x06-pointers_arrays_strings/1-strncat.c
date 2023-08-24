#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenaate two strings from specified point
 *
 * @dest: destination
 * @src: source
 * @n: number to end concatenation
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
		j++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[j++] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
