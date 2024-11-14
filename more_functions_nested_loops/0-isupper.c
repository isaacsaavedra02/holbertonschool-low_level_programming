#include "main.h"

/**
 *_isupper - función que indica si un carácter es una letra mayúscula
 *@c: variable que representa el carácter a verificar
 *Return: 1 si es mayúscula, 0 si no
 */
int _isupper(int c) {
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}
