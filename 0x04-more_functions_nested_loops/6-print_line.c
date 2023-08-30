#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a sttraight line in the terminal
 *
 * @n: kength of the line
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
