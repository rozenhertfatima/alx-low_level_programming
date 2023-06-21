#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: No return.
 */
void times_table(void)
{
	{
		int i, j;

		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				int result = i * j;

				putchar(result);
			}
			putchar("\n");
		}
	}
