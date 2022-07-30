#include <unistd.h>

/**
 * _putchar - wrties c character in the stdout
 * @c: its the character to be printed
 * Return: on success 1
 * on error, return -1 and set error approriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
