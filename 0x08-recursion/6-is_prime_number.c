#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - check prime number
 * @n: number to be checked
 * Return 1 on success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, 2));
}
/**
 * prime- evaluate through b
 * @a: number being checked
 * @b: divisor
 * Return - 1 on success
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	else
		return (prime(a, b + 1));
}
