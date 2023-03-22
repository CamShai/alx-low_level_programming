#include "main.h"
/**
 * main- find out if c is lowercase
 *Return:0 if unsuccessful and 1 if success
 *int c- find if c is lowercase
 *_islower- is function we use
 *@c- character we check to see if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
