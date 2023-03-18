#include <stdio.h>
/**
 * main- is the main function
 *
 * Return: is 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
		putchar (i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar (i);
	putchar ('\n');
	return (0);

}
