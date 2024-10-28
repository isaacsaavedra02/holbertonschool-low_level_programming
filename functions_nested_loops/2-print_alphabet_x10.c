#include "main.h"
/**
 * print_alphabet_x10 - imprime el abc 10 veces
 */
void print_alphabet_x10(void)
{
	char x, xd;

	for (x = 0; x < 10; x++)
	{
		for (xd = 'a'; xd <= 'z'; xd++)
		{
			_putchar(xd);
		}
		_putchar('\n');
		}
}
