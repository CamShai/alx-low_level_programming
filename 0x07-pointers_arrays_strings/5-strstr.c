#include <stdio.h>
#include "main.h"
/**
 *_strstr - finds first occurence of substring needle in string haystack
 *@needle: substring
 *@haystack: string
 *Return: to beginning of located substring or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] != '\0')
		{
			if (haystack[j] == needle[i])
			{
				return (haystack + j);
			}
			j++;
		}
		i++;
	}
	return (0);
}
