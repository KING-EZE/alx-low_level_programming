#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: Alaphabets
 * Return: zero on success
 */
int main(void)
{
	char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);
}
