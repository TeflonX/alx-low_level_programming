#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - copy from one file to another
 * Return: 0 (Success)
 * @ac: argument count
 * @av: double pointer to argument vector
 */
int main(int ac, char **av)
{
	int fd1, fd2, count1, count2, z1, z2;

	char *buf;

	buf = malloc(1024);
	if (buf != 0)
		return (NULL);

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(98);
	}

	fd1 = open(av[1], O_RDWR);
	count1 = read(fd1, buf, 1024);
	if (fd1 < 0 || count1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 00664);
	count2 = write(fd2, buf, 1024);
	if (fd2 < 0 || count2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[1]);
		exit(99);
	}

	z1 = close(fd1);
	z2 = close(fd2);
	if (z1 != 0 || z2 != 0)
	{
		dprintf(2, "Error: Can't close fd %d", z1);
		exit(100);
	}

	return (0);
}
