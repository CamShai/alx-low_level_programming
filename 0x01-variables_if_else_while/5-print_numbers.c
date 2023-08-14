#include <stdio.h>
/**
 * Main- is entry point
 *
 * Description: Print single digit numbers under ten
 *
 * Return: 0 if success
 * **/
int main(void){
	int dig = 0;
	while(dig < 10){
		putchar(dig);
		dig++;
	}
	putchar("\n");
	return (0);
