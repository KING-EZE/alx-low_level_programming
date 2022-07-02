#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determining the value if its grater than 5,less than 6 or 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	g = n % 10;
	if (g > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, g);
	}
	else if (g == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, g);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, g);
	}
	return (0);
}
