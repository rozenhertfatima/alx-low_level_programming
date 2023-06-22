#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 * @c: uppercase character
 * Return: to 1 if it is upper, else 0
 */
int _isupper(int c)
{
	if (c > 0)
	{
		_putchar('A');
		return (1);
	}
	else
	{
		_putchar('a');
		return (0);
	}
}
