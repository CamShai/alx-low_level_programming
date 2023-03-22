#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 'a'; j <= 'z'; j++)
		for (i = 0; i <= 10; i++)
			_putchar(j);
	_putchar('\n');
}
