#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: No return.
 */
void times_table(void)
{
	int a, b;

	for (a = 0 ; a <= 10 ; a++)
	{
		_putchar(48);
		for (b = 1 ; b <= 10 ; b++)
		{
			_putchar(',');
			_putchar(' ');
			if ((a * b) > 9)
				_putchar((a * b) / 10 + 48);
			else
				_putchar(' ');
			_putchar((a * b) % 10 + 48);
		}
		_putchar('\n');
	}
}
