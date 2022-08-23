#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX stardard output
 * @filename: text file to be read
 * @letters: numbers of letters to be read and printed
 * Return: number of letters that can be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wrt;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);
	if (wrt == -1)
		return (0);
	close(fd);
	free(buf);
	return (wrt);
}
