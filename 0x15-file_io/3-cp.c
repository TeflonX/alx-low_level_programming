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
 * return_error - prints error if file fails to open, read or write
 * Return: void
 * @fd1: determines if read or open operation fail for first file.
 * @fd2: determines if open or write fail for second file
 * @av: pointer to argument vector
 */
void return_error(int fd1, int fd2, char *av[])
{
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - copy from one file to another
 * Return: 0 (Success)
 * @ac: argument count
 * @av: double pointer to argument vector
 */
int main(int ac, char *av[])
{
	int fd1, fd2, count1, count2;

	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	(return_error(fd1, 0, av));

	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	(return_error(0, fd2, av));
	while ((count1 = read(fd1, buf, 1024)) > 0)
	{
		count2 = write(fd2, buf, count1);
		(return_error(0, count2, av));
	}
	(return_error(count1, 0, av));
	close_fd(fd1);
	close_fd(fd2);
	return (0);
}
