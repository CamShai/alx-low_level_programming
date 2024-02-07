#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- creates array
 * @size: size of array
 * @c: character to initiate array
 * return - 0 if success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == 0)
		return (0);
	for (i = 0; i < size; i++)
		*(s + i) = c;
	*(s + i) = '\0';

	return (s);
}
