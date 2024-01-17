#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
