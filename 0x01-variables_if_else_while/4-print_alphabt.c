#include <stdio.h>
/**
 * Main - is entry point
 * Description: print alphabet except q and e
 * Return: 0 when success
 * */
int main(void){
	char ch = "a";
	while(ch <= "z" && ch != "q" && ch != "e"){
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
