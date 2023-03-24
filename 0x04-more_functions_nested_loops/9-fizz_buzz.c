#include <stdio.h>
/*main- is main function
 *
 */
int main(void)
{
	int i;

	i = 1;
	while (i >= 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		putchar(' ');
	}
	return(0);
}
