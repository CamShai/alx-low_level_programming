#include <stdio.h>
#include "main.h"
/**
 * _strlen - check length oof string
 *
 * @s: string to be counted
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count;

	for(count = 0; *s != '\0'; s++){
		count++;
	}
	return (count);
}
