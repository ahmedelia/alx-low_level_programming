#include "main.h"
/**
 * append_text_to_file - check the code
 * @filename: blablalba
 * @text_content: blablalba
 * Return: void
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!text_content)
	{
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT);
	if (fd == -1)
		return (-1);
	if (write(fd, text_content, strlen(text_content)) == -1)
	{
		return (-1);
	}
	return (1);

}
