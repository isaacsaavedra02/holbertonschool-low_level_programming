#include "main.h"

/**
 *_isupper - función que indica si un carácter es una letra mayúscula
 *@c: variable que da mayúsculas
 *Return: 1 si es mayúscula, 0 si no
 */
int _isupper(int c) {
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

/**
 * main - función principal para probar _isuper
 * Return: 0
 */
int main() {
	char c = 'A';
	printf("%c: %d\n", c, _isupper(c));

	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	return 0;
}
