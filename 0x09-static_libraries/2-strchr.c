#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in astring
 * @s: string
 * @c: character to be located
 * Return: pointer to first occurrence of c or null if char not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	*/
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
