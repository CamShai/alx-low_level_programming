#include "function_pointers.h"
/**
 * int_index- searches for an integer
 * @size: number of elements
 * @array- array
 * @cmp:pointer to function to be used
 * Return: 0 if success, -1 if not successful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size > 0 && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	else
		return (-1);
	return (0);
}
