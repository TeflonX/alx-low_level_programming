#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * Return: number of bytes(ssize_t) printed
 * @filename: file to read from
 * @letters: number of byte to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, count1;

	char *ptr;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	ptr = malloc((letters + 1) * sizeof(char));
	if (!ptr)
		return (0);

	count = read(fd, ptr, letters);
	ptr[letters] = '\0';
	if (count < 0)
		return (0);

	count1 = write(STDOUT_FILENO, ptr, count);
	if (count1 < 0)
		return (0);

	if (count != count1)
		return (0);

	close(fd);
	free(ptr);
	return (count);
	}
}
