#include "main.h"
/**
 * print_times_table - print times table up to input
 * Description: write times table up to input not exceeding 15
 * @n: size of times table
 * Return: void
 */
void print_times_table(int n)
{
	int x, y, opp;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				opp = (x * y);
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (opp < 10 && y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((opp % 10) + '0');
				}
				else if (opp >= 10 && opp < 100)
				{
					_putchar(' ');
					_putchar((opp / 10) + '0');
					_putchar((opp % 10) + '0');
				}
				else if (opp >= 100 && y != 0)
				{
					_putchar((opp / 100) + '0');
					_putchar((opp / 10) % 10 + '0');
					_putchar((opp % 10) + '0');
				}
				else
					_putchar((opp % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
