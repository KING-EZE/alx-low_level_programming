#include "main.h"
/**
 * error_file - checks if files can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: agruments vector
 * Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checks the code
 * @argc: numbers of arguments
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nrd, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	nrd = 1024;
	while (nrd == 1024)
	{
		nrd = read(file_from, buf, 1024);
		if (nrd == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, nrd);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
