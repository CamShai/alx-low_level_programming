#include "main.h"
/**
 * _strspn - count num of chars
 * @s: final destination of bytes
 * @accept: bytes come from here
 * Return: num of bytes in s from accept
 * Description: bytes from accept present in S are counted and returned
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				break;
		if (!accept[j])
			break;
	}
	return (i);
}
