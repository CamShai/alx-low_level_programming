#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed in half
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int count;
	int half;

	for (count = 0; str[count] != '\0'; count++)
		;
	if (count % 2 == 0)
	{
		for (half = count / 2; str[half] != '\0'; half++)
			_putchar(str[half]);
		}
	else
	{
		for (half = (count - 1) / 2; str[half] != '\0'; half++)
			_putchar(str[half]);
					}
					}
