#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: print except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e')
		{
			letter++;
		}
		else if (letter == 'q')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}

		putchar('\n');
		return (0);
}
