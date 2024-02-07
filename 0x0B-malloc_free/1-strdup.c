#include "main.h"
#include <stdlib.h>
/**
 * _strdup- duplicate string
 * @str: string to be duplicated
 * Return - pointer
 */
char *_strdup(char *str)
{
	int i, l;
	char *s;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (*(str + l))
		l++;
	s = malloc(sizeof(char) * l);
	if (s == 0)
		return (NULL);
	for (i = 0; i < l; i++)
		*(s + i) = *(str + i);
	return (s);
}
