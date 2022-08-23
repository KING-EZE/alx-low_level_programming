#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wrt;
	int j = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		while (text_content[j] != '\0')
		{
			j++;
		}
		wrt = write(fd, text_content, j);
		if (wrt == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
