#include "main.h"
#include <stdlib.h>
/**
 * str_concat- concatenate two strings
 * @s1: first string
 * @s2: second string
 * Retiurn - pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2;
	char *s;
	char *null = "";
	int tot;

	l1 = 0;
	l2 = 0;
	if (s1 == NULL)
		s1 = null;
	if (s2 == NULL)
		s1 = null;
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;
	tot = l1 + l2;
	s = malloc(sizeof(char) * tot + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < l1; i++)
		*(s + i) = *(s1 + i);
	for (i = 0, j = l1; i < l2; j++, i++)
		*(s + j) = *(s2 + i);
	return (s);
}


