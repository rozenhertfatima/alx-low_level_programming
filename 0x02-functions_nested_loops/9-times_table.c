#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: No return.
 */
void times_table(void)
{
	int a, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (c = 1; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');
			if ((a * c) <=  9)
				_putchar(' ');
			else
				_putchar((a * c) / 10 + 48);
		_putchar((a * c) % 10 + 48);
		}
		_putchar('\n');
	}
}

