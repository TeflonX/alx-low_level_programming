#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - A function that appends text at the end of a file
 * Return: 1(Succes) or -1(Error)
 * @filename: file to be written into
 * @text_content: file to write from
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		count = write(fd, text_content, strlen(text_content));
		if (count < 0)
			return (-1);
	}

	return (1);
}
