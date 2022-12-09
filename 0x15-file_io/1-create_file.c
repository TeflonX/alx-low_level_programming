#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file -  a function that creates a file
 * Return: 1(Success) or -1(Error)
 * @filename: file to write into
 * @text_content: string to write from
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count1;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		count1 = write(fd, text_content, strlen(text_content));
		if (count1 < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
