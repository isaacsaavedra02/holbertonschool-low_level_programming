#include "main.h"
/**
 * _isdigit - verifica si un carácter es un dígito (0 a 9)
 * @c: carácter a verifc
 * Return: 1 si c es un dígito, 0 en caso contrari
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
