#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of characters
 * @size: size of array
 * @c: character to fill array
 * Return: pointer to array created
 */
char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int i;

	buff = malloc(size);
	if (size == 0 || buff == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buff[i] = c;
	return (buff);
}
