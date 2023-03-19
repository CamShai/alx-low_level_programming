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
		if (i <= 8)
			putchar(i);
		else
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
