#include "main.h"
/**
 * @a- is target integer
 * @b- also target integer
 * swap_int - function to swap integers
 */
void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
