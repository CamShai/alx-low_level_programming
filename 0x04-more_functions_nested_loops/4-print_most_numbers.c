#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prinnts numbers from 0 to 9 excluding 2 and 4
 * Reurn: Nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		if (i == 50 || i == 52)
			;
		else
			_putchar(i);
	_putchar('\n');
}
