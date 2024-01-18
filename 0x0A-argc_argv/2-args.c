#include "stdio.h"
#include "stdlib.h"

/**
 * main- entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return- 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
