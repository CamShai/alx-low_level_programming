#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies string from src to dest
 *
 * @dest: destination foor the string
 *
 * @src: source for the string
 *
 * Return: dest if successful
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
