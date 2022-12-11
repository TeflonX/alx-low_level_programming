#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * close_fd - closes an open file
 * Return: void
 * @fd: file descriptor of file to be closed
 */
void close_fd(int fd)
{
	int z;

	z = close(fd);
	if (z != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", z);
		exit(100);
	}
}

/**
 * main - copy from one file to another
 * Return: 0 (Success)
 * @ac: argument count
 * @av: double pointer to argument vector
 */
int main(int ac, char **av)
{
	int fd1, fd2, count1, count2;

	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (1);

	fd1 = open(av[1], O_RDONLY);
	count1 = read(fd1, buf, 1024);
	if (fd1 == -1 || count1 == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", av[1]);
		free(buf);
		exit(98);
		}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	while (count1 > 0)
	{
		if (fd1 == -1 || count1 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(buf);
			exit(98);
		}
		count2 = write(fd2, buf, count1);
		if (fd2 < 0 || count2 < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(buf);
			exit(99);
		}
		count1 = read(fd1, buf, 1024);
		fd2 = open(av[2], O_WRONLY, O_APPEND);
	}
	close_fd(fd1);
	close_fd(fd2);
	return (0);
}
