#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints characters recursively
 * @s: char to be printed
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if ( *s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
