#include "main.h"
/**
  * read_textfile - read a file
  * @filename: the name of file
  * @letters: number of letters
  * Return: the number of letters read
  */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[100];
	size_t i = 0;
	int count = 0;
	char c = 1;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	if (filename == 0L)
		return (0);
	if (letters == 0)
		return (0);
	while (i < letters)
	{
		c = read(fd, &buff[i], 1);
		if (c == 0)
			break;
		++i;
		if (i == 100 && i < letters)
		{
			count += 100;
			i = 0;
			letters -= 100;
			write(STDOUT_FILENO, buff, 100);
		}
	}
	write(STDOUT_FILENO, buff, i);
	count += i;
	close(fd);
	return (count);
}
