#include <stdio.h>
/**
 * Main - is entry point
 *
 * Description: Print alphabet in lowercase then uppercase
 * Return: 0 when successful
 * */
int main(void){
	char ch = "a";
	char CH = "A";
	while(ch <= "z"){
		putchar(ch);
		ch++;
	}
	while(CH <= "Z"){
		putchar(CH);
		CH++;
	}
	putchar("\n");
	return (0);
