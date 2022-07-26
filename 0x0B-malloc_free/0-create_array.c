#include "main.h"

/**
 * create_array - creating an array
 * @size: size of an array to be created
 * @c: character an array is initialized
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		s[a] = c;
	return (s);
}
