#include <stdio.h>
/**
 * main- is main function
 *
 * Return: is 0
 *
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'A'; i <= 'F'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
