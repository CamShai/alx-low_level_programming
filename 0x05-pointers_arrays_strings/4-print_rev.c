#include <stdio.h>
#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: string to be reversed
 *
 * Return: Nothing
 */
void print_rev(char *s){
	int index;

	for(index = 0; index != '\0'; index++){
	}
	while(index >= 0){
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
