#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Alphabets and numbers in base 16
 * Return: Always 0 (success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	num = 'a';

	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
