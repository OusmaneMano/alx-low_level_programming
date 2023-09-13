#include "main.h"
/**
 * times_table - print time table
 *
 * Return: 0 (success)
 */

void times_table(void)
{
	int i, j, k, m, n;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		k = (i * j);
		if (k > 9)
		{
			m = k % 10;
			n = (k - m) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(n + '0');
			_putchar(m + '0');
		}
		else
		{
		if (j != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		}
		_putchar(k + '0');
		}
	}
	_putchar('\n');
	}
}

