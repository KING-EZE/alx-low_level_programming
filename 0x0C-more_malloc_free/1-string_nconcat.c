#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a = 0, b = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	if (n > b)
		n = b;
	p = malloc((a + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (i = 0; i < a; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (a + n); i++)
	{
		p[i] = s2[i - a];
	}
	p[i] = '\0';
	return (p);
}
