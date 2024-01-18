#include "stdio.h"
#include "stdlib.h"
int main(int argc, char *argv[])
{
	int x;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	return (0);
}
