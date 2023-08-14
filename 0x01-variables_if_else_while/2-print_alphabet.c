#include <stdio.h>
/**
 * Main - Entry point
 *
 * Description : Print alaphabetic characters from a to z
 *
 * Return: 0 when successful
 * **/
int main(void){
	char ch = "a";
	while(ch <= "z"){
		purchar(ch);
	ch++;}
	putchar("\n");
	return (0);
}
