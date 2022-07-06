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
		_putchar('0');
		for (b = 0; b <= 9; b++)
		{
			opp = a * b;
			_putchar(',');
			_putchar(' ');
			if (opp <= 9)
			{
				_putchar(' ');
				_putchar(opp + '0');
			}
			else
			{
				_putchar((opp / 10) + '0');
				_putchar((opp % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
