#include "main.h"
/**
 * times_table - print times table up to 9
 * Return: void
 */
void times_table(void)
{
	int a, b, opp;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			opp = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (opp >= 10)
			{
				_putchar((opp / 10) + '0');
				_putchar((opp % 10) + '0');
			}
			else if ((opp < 10) && (b != 0))
			{
				_putchar(' ');
				_putchar((opp % 10) + '0');
			}
			else
			{
				_putchar((opp % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
