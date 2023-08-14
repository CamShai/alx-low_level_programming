#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int digit = n % 10;
	if(digit > 5){
		printf("Last digit of %d is %d and is greater than 5", n, digit);}
	else if(digit == 0){
		printf("Last digit of %d is %d and is zero", n, digit);}
	else if(digit < 6 && digit != 0){
		printf("Last digit of %d is %d and is less than 6 and not 0", n, digit);}
	return (0);
}
