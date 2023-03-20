#include <stdio.h>
/**
 * main- main function
 *
 * Return:0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i < 9)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(i);
	}
	return (0);
}
