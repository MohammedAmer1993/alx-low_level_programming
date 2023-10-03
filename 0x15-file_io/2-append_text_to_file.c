#include "main.h"
/**
  * append_text_to_file - append text
  * @filename: the name of file
  * @text_content: the content
  * Return: 1 on success -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (text_content == NULL)
	{
		if (filename == NULL)
			return (-1);
		else
			return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (write(fd, text_content, strlen(text_content)) < 0)
		return (-1);
	close(fd);
	return (1);
}
