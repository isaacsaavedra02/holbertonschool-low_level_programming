#include "main.h"

/**
 * print_numbers - imprime los numeros del 0 al 9
 * Return del 0 al 9
 */

void print_numbers(void)
{
	char xd;

	for (xd = '0'; xd <= '9'; xd++)
	{
		_putchar (xd);
	}
	_putchar ('\n');
}
