#include <stdio.h>
#include "main.h"
/**
 * _puts - print a string
 *
 * @str: string to be printed
 *
 * Return: nothing
 */

void _puts(char *str){
	while(*str != '\0'){
		_putchar(*str + 0);
		str++;
	}
	_putchar('\0');
}
