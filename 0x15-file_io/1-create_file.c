#include "main.h"
/**
  * create_file - to creat a file
  * @filename: the name of file
  * @text_content: the content of file
  * Return: 1 on success -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == 0L)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd < 0)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd < 0)
			return (-1);
		if (text_content != 0L)
			if (write(fd, text_content, strlen(text_content)) < 0)
				return (-1);
	}
	close(fd);
	return (1);

}
