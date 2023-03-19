#include <stdio.h>
/**
 * main-is the main function
 *
 * Return:0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
			putchar(i);
		{
			if (i < j)
			{
				putchar(',');
				putchar(' ');
				putchar(j);
			}
		}
	}
	return (0);
}
