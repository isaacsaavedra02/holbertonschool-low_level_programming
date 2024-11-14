#include "main.h"

/**
 * print_numbers - imprime los numeros del 0 al 9
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar (c);
	}
	putchar ('\n');
}
