#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @size: size of the array
 * @action: pointer to function to use
 * @array: array 
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (size && array && action)
	{
		while (i < size)
		{
		action(array[i]);
		i++;
		}
	}
}
