#include "main.h"
/**
 * _memcpy - copies bytes from src to dest
 * @dest: is destination for bytes
 * @src: is source for bytes
 * Return: dest
 * Description- Copies n bytes from src to dest
 * @n:nu,ber of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
