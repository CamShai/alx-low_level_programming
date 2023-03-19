#include <stdio.h>
/**
 * main- main function
 *
 * Return:0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)		
		if (i < 9)
		{	
			putchar(',');
			putchar(' ');
		}
		else
			putchar(' ');
	putchar('\n');
	return (0);
}
